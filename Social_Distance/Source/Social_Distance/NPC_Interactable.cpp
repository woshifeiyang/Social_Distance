// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC_Interactable.h"

#include <ThirdParty/CryptoPP/5.6.5/include/misc.h>

#include "Blueprint/WidgetTree.h"
#include "MainCharacterAnimInstance.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "TaskRequestFrame.h"
#include "Components/ProgressBar.h"
#include "Components/RichTextBlock.h"
#include "Struct_TaskProperty.h"

// Sets default values
ANPC_Interactable::ANPC_Interactable()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	// 创建Niagara组件并绑定距离线效果
	LineEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LineEffect"));
	LineEffect->SetupAttachment(RootComponent);
	ConstructorHelpers::FObjectFinder<UNiagaraSystem> NiagaraSystemObj(TEXT("NiagaraSystem'/Game/StarterContent/VFX/NS_Prototype_Line.NS_Prototype_Line'"));
	if(NiagaraSystemObj.Succeeded())
	{
		LineEffect->SetAsset(NiagaraSystemObj.Object);
	}else
	{
		PrintLog("Can not find NiagaraSystemObj");
	}
	// 创建Widget组件并绑定Bubble UI控件蓝图
	Bubble = CreateDefaultSubobject<UWidgetComponent>(TEXT("Bubble"));
	Bubble->SetupAttachment(GetMesh());
	ConstructorHelpers::FClassFinder<UUserWidget> BubbleBPClass(TEXT("UserWidget'/Game/UI/WB_NPCName.WB_NPCName_C'"));
	if(BubbleBPClass.Succeeded())
	{
		Bubble->SetWidgetClass(BubbleBPClass.Class);
	}else
	{
		PrintLog("Can not find BubbleClass");
	}
	Bubble->SetWidgetSpace(EWidgetSpace::Screen);
	Bubble->SetDrawAtDesiredSize(true);
	// 创建Widget组件并绑定CursorOverNPC UI控件蓝图
	SimpleName = CreateDefaultSubobject<UWidgetComponent>(TEXT("SimpleName"));
	SimpleName->SetupAttachment(GetMesh());
	ConstructorHelpers::FClassFinder<UUserWidget> SimpleNameBPClass(TEXT("UserWidget'/Game/UI/WB_CursorOnNPCName.WB_CursorOnNPCName_C'"));
	if(SimpleNameBPClass.Succeeded())
	{
		SimpleName->SetWidgetClass(SimpleNameBPClass.Class);
	}else
	{
		PrintLog("Can not find SimpleNameBPClass");
	}
	SimpleName->SetWidgetSpace(EWidgetSpace::Screen);
	SimpleName->SetDrawAtDesiredSize(true);
	// 绑定任务弹出框蓝图
	ConstructorHelpers::FClassFinder<UTaskRequestFrame> TaskRequestBPClass(TEXT("UserWidget'/Game/UI/WB_TaskRequestFrame.WB_TaskRequestFrame_C'"));
	if(TaskRequestBPClass.Succeeded())
	{
		TaskFrameUI = TaskRequestBPClass.Class;
	}
	// 绑定任务提交框蓝图
	ConstructorHelpers::FClassFinder<UTaskCompletedFrame> TaskCompletedBPClass(TEXT("UserWidget'/Game/UI/WB_TaskCompletedFrame.WB_TaskCompletedFrame_C'"));
	if(TaskCompletedBPClass.Succeeded())
	{
		TaskCompletedFrameUI = TaskCompletedBPClass.Class;
	}
}

// Called when the game starts or when spawned
void ANPC_Interactable::BeginPlay()
{
	Super::BeginPlay();
	
	Loneliness = InitLoneliness;
	Risk = InitRisk;
	IsIndoor = false;
	DoOnce = true;
	Bubble->SetVisibility(false);					// 初始化默认气泡不显示
	SimpleName->SetVisibility(false);
	Bubble->SetRelativeLocation(FVector(0, 0, 250));
	SimpleName->SetRelativeLocation(FVector(0, 0, 250));
	LineEffect->SetRenderCustomDepth(true);
	// 获取MainCharacter在游戏中的实例
	MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AMainCharacter::StaticClass()));
	if(MainCharacter)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_1, this, &ANPC_Interactable::UpdateState, 0.5f, true);
		// 获取Maincharacter的动画蓝图对象
		MainCharacterAnimInstance = Cast<UMainCharacterAnimInstance>(MainCharacter->GetMesh()->GetAnimInstance());
		// 获取Main character对象的Bubble控件引用
		TArray<UActorComponent*> FoundComponents = MainCharacter->GetComponentsByTag(UWidgetComponent::StaticClass(),"Bubble");
		MainBubble = Cast<UWidgetComponent>(FoundComponents[0]);
	}
	// 获取NPC的动画蓝图对象
	NPCAnimInstance = Cast<UMainCharacterAnimInstance>(GetMesh()->GetAnimInstance());
	// 获取任务弹窗的蓝图对象
	TaskRequestFrameInstance = Cast<UTaskRequestFrame>(CreateWidget(GetWorld(), TaskFrameUI));
	// 获取提交任务弹窗的蓝图对象
	TaskCompletedFrameInstance = Cast<UTaskCompletedFrame>(CreateWidget(GetWorld(), TaskCompletedFrameUI));
	// 从数据表中提取与NPC名字匹配的行并加入数组中
	FString ContextString;
	if(TaskPropertyDataTable != nullptr)
	{
		TArray<FName> RowNames = TaskPropertyDataTable->GetRowNames();
		for(auto& name : RowNames)
		{
			FTaskProperty* Row = TaskPropertyDataTable->FindRow<FTaskProperty>(name, ContextString);
			if(Row != nullptr && Row->NPC_Name == Name)
			{
				TaskArray.Add(Row);
			}
		}
	}
}

// Called every frame
void ANPC_Interactable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SelfLocation = GetActorLocation();
	
	SetLineEffect();
}

// Called to bind functionality to input
void ANPC_Interactable::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ANPC_Interactable::NotifyActorOnClicked(FKey ButtonPressed)
{
	Super::NotifyActorOnClicked(ButtonPressed);
	if(Distance <= ConversationalDistance)
	{
		SimpleName->SetVisibility(false);
		Bubble->SetVisibility(true);
		MainBubble->SetVisibility(true);
		if(DoOnce)
		{
			if(MainCharacter)
			{
				MainCharacter->TalkingPoint = MainCharacter->SelfLocation;
			}
			if(MainCharacterAnimInstance)
			{
				MainCharacterAnimInstance->IsTalking = true;
			}
			if(NPCAnimInstance)
			{
				NPCAnimInstance->IsTalking = true;
			}
			GetWorldTimerManager().SetTimer(TimerHandle_2, this, &ANPC_Interactable::CloseMCBubble, 0.1f, true);
			// 检查玩家是否已经领取了该NPC的任务，如果领取了则检查任务处于第几阶段，如果没领取则可以领取
			int32 Index;
			if(IsTaskInList(Index) == true)
			{
				if(MainCharacter->TaskList[Index] == 2)
				{
					GetWorldTimerManager().SetTimer(TimerHandle_3, this, &ANPC_Interactable::ShowTaskCompletedFrameBP, 2.0f, false);
				}
			}else
			{
				if(MainCharacter->TaskList.Num() <= 2)
				{
					GetWorldTimerManager().SetTimer(TimerHandle_3, this, &ANPC_Interactable::ShowTaskRequestFrameBP, 2.0f, true);
				}
			}
			DoOnce = false;
		}
	}
}

void ANPC_Interactable::NotifyActorBeginCursorOver()
{
	Super::NotifyActorBeginCursorOver();
	if(Bubble->IsVisible() == true)
	{
		SimpleName->SetVisibility(false);
	}
	else
	{
		SimpleName->SetVisibility(true);
	}
}

void ANPC_Interactable::NotifyActorEndCursorOver()
{
	Super::NotifyActorEndCursorOver();
	SimpleName->SetVisibility(false);
}

/* 更新风险值和孤单值，以及对话框是否消失
 * Loneliness = Loneliness - 孤单下降系数
 * Risk = Risk + 风险上升系数
 * 当距离超过一定范围对话框消失
 */
void ANPC_Interactable::UpdateState()
{
	// 更新NPC的对话框信息
	InitBubbleBlueprint();
	// 更新鼠标悬停时NPC名字信息
	InitSimpleNameBlueprint();
	
	Distance = GetDistanceTo(MainCharacter);
	if(Distance <= RiskRangeValue)
	{
		if(Loneliness - LonelinessDeclineRate > 0.0f)
		{
			// PrintLog("Interactable Character Loneliness is" + FString::SanitizeFloat(Loneliness));
			Loneliness -= LonelinessDeclineRate;
		}else
		{
			Loneliness = 0.0f;
		}
		if(Risk + RiskIncreaseRate < 100.0f)
		{
			Risk += RiskIncreaseRate;
		}else
		{
			Risk = 100.0f;
		}
	}
}

void ANPC_Interactable::DestroyNiagaraComponent(UNiagaraComponent* NiagaraComponent)
{
	NiagaraComponent->DestroyComponent();
}

void ANPC_Interactable::SetLineEffect()
{
	if(MainCharacter)
	{
		if(GetDistanceTo(MainCharacter) < LineDisappearingRange)
		{
			LineEffect->SetVisibility(true);
			FVector NPCPosition(SelfLocation.X, SelfLocation.Y, SelfLocation.Z - 80);
			FVector MCPosition(MainCharacter -> SelfLocation.X, MainCharacter -> SelfLocation.Y, MainCharacter -> SelfLocation.Z - 80);
			LineEffect -> SetVectorParameter("NPC_POS", NPCPosition);
			LineEffect -> SetVectorParameter("Player_POS", MCPosition);
		}else
		{
			LineEffect->SetVisibility(false);
		}
	}
}

void ANPC_Interactable::CloseMCBubble()
{
	if(FVector::Distance(MainCharacter->TalkingPoint, MainCharacter->SelfLocation) >= 50.0f)
	{
		if(MainCharacterAnimInstance)
		{
			MainCharacterAnimInstance->IsTalking = false;
		}
		if(NPCAnimInstance)
		{
			NPCAnimInstance->IsTalking = false;
		}
		MainBubble->SetVisibility(false);
		Bubble->SetVisibility(false);
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle_2);
		DoOnce = true;
	}
}

void ANPC_Interactable::ShowTaskRequestFrameBP()
{
	// 检查玩家是否在对话过程中移动了，如果移动则取消弹出任务请求
	if(FVector::Distance(MainCharacter->TalkingPoint, MainCharacter->SelfLocation) < 50.0f)
	{
		// 随机几率弹出任务请求框
		int32 num = FMath::RandRange(1,100);
		if(num <= 50)
		{
			if(TaskFrameUI != nullptr)
			{
				if(TaskRequestFrameInstance != nullptr)
				{
					URichTextBlock* TaskRequest = TaskRequestFrameInstance->TaskRequest;
					URichTextBlock* TaskContent = TaskRequestFrameInstance->TaskContent;
					
					int32 Index = FMath::RandRange(0, TaskArray.Num() - 1);
					FTaskProperty* Row = TaskArray[Index];
					MainCharacter->TaskIndex = Row->TaskIndex;
					MainCharacter->TaskList.Add(Row->TaskIndex, 0);
					
					if(TaskRequest)
					{
						if(Row != nullptr)
					 	{
					 		FString String = "<BodyText>" + Row->TaskRequest + "</>";
					 		TaskRequest->SetText(FText::FromString(String));
					 	}
					}
					if(TaskContent)
					{
					 	if(Row != nullptr)
					 	{
					 		FString String = "<BodyText>" + Row->TaskContent + "</>";
					 		TaskContent->SetText(FText::FromString(String));
					 	}
					}
				}
				TaskRequestFrameInstance->AddToViewport();
				GetWorld()->GetTimerManager().ClearTimer(TimerHandle_3);
				UGameplayStatics::SetGamePaused(GetWorld(),true);
			}
		}
	}else
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle_3);
	}
}

void ANPC_Interactable::ShowTaskCompletedFrameBP()
{
	if(TaskCompletedFrameUI != nullptr)
	{
		if(TaskCompletedFrameInstance != nullptr)
		{
			URichTextBlock* TaskCompletedContent = TaskCompletedFrameInstance->TaskCompletedContent;
			if(TaskCompletedContent != nullptr)
			{
				int32 Index;
				IsTaskInList(Index);
				FString String = "<BodyText>" + TaskArray[Index]->TaskCompletedContent + "</>";
				TaskCompletedContent->SetText(FText::FromString(String));
				TaskCompletedFrameInstance->Index = Index;
			}
			TaskCompletedFrameInstance->AddToViewport();
			GetWorld()->GetTimerManager().ClearTimer(TimerHandle_3);
			UGameplayStatics::SetGamePaused(GetWorld(),true);
		}
	}
}

/*
 * 在UpdateState函数中每隔0.5秒更新一次
 * 更新玩家与NPC对话时，NPC身上的控件蓝图的Loneliness信息
 */
void ANPC_Interactable::InitBubbleBlueprint()
{
	UProgressBar* ProgressBar = Cast<UProgressBar>(Bubble->GetWidget()->GetWidgetFromName(TEXT("LonelinessBar")));
	URichTextBlock* RichTextBlock = Cast<URichTextBlock>(Bubble->GetWidget()->GetWidgetFromName(TEXT("NPCName")));
	if(ProgressBar != nullptr)
	{
		ProgressBar->SetPercent(Loneliness / 100.0f);
	}else
	{
		PrintLog("ProgressBar pointer is nullptr");
	}
	if(RichTextBlock != nullptr)
	{
		FString String = "<TitleText>" + Name + "</>";
		RichTextBlock->SetText(FText::FromString(String));
	}else
	{
		PrintLog("RichTextBlock pointer is nullptr");
	}
}
/*
 * 在UpdateState函数中每隔0.5秒更新一次
 * 更新鼠标移动到NPC身上时的控件蓝图的Loneliness信息
 */
void ANPC_Interactable::InitSimpleNameBlueprint()
{
	UProgressBar* ProgressBar = Cast<UProgressBar>(SimpleName->GetWidget()->GetWidgetFromName(TEXT("LonelinessBar")));
	URichTextBlock* RichTextBlock = Cast<URichTextBlock>(SimpleName->GetWidget()->GetWidgetFromName(TEXT("NPCName")));
	
	if(ProgressBar != nullptr)
	{
		ProgressBar->SetPercent(Loneliness / 100.0f);
	}else
	{
		PrintLog("ProgressBar pointer is nullptr");
	}
	if(RichTextBlock != nullptr)
	{
		FString String = "<TitleText>" + Name + "</>";
		RichTextBlock->SetText(FText::FromString(String));
	}else
	{
		PrintLog("RichTextBlock pointer is nullptr");
	}
}

bool ANPC_Interactable::IsTaskInList(int32& Index)
{
	for(auto Row : TaskArray)
	{
		if(MainCharacter->TaskList.Find(Row->TaskIndex) != nullptr)
		{
			Index = Row->TaskIndex;
			return true;
		}
	}
	return false;
}

void ANPC_Interactable::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, String);
	}
}

