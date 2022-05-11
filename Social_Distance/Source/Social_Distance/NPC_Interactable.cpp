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
#include "Kismet/KismetMathLibrary.h"

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
	// 咳嗽音频
	ConstructorHelpers::FObjectFinder<USoundWave> CoughClass(TEXT("SoundWave'/Game/StarterContent/Audio/cough.cough'"));
	CoughAudio = CoughClass.Object; 
}

// Called when the game starts or when spawned
void ANPC_Interactable::BeginPlay()
{
	Super::BeginPlay();
	
	Happiness = InitHappiness;
	Risk = InitRisk;
	IsIndoor = false;
	DoOnce = true;
	Bubble->SetVisibility(false);					// 初始化默认气泡不显示
	SimpleName->SetVisibility(false);
	Bubble->SetRelativeLocation(FVector(0, 0, 250));
	SimpleName->SetRelativeLocation(FVector(0, 0, 250));
	LineEffect->SetRenderCustomDepth(true);
	AudioManager = GEngine->GetAudioDeviceManager();
	AudioController = false;
	GetWorldTimerManager().SetTimer(TimerHandle_5, this, &ANPC_Interactable::AutoDecreaseHappiness, 5.0f, true);
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

		// 从数据表中提取与NPC名字匹配的行并加入数组中
		if(MainCharacter->TaskPropertyDataTable != nullptr)
		{
			TArray<FName> RowNames = MainCharacter->TaskPropertyDataTable->GetRowNames();
			for(auto& name : RowNames)
			{
				FString ContextString;
				FTaskProperty* Row = MainCharacter->TaskPropertyDataTable->FindRow<FTaskProperty>(name, ContextString);
				if(Row != nullptr && Row->NPC_Name == Name)
				{
					TaskArray.Add(Row);
				}
			}
		}
	}
	// 获取NPC的动画蓝图对象
	NPCAnimInstance = Cast<UMainCharacterAnimInstance>(GetMesh()->GetAnimInstance());
	// 获取任务弹窗的蓝图对象
	TaskRequestFrameInstance = Cast<UTaskRequestFrame>(CreateWidget(GetWorld(), TaskFrameUI));
	// 获取提交任务弹窗的蓝图对象
	TaskCompletedFrameInstance = Cast<UTaskCompletedFrame>(CreateWidget(GetWorld(), TaskCompletedFrameUI));
	
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
/*
 *	点击NPC时如果在可交谈距离内，则弹出聊天气泡
 *	如果没有领取过该NPC任务，概率弹出任务请求框
 *	如果领取过，则判断是否处于第二阶段，如果是则弹出提交任务框
 */
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
				const FRotator NPC_LookAtYaw = GetLookAtRotationYaw(MainCharacter->GetActorLocation());
				const FRotator InterRotation = FMath::RInterpTo(GetActorRotation(), NPC_LookAtYaw, 0.1f, 5.0f);
				SetActorRotation(InterRotation);

				const FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(MainCharacter->SelfLocation, SelfLocation);
				const FRotator LookAtRotationYaw(0.f,LookAtRotation.Yaw,0.f);
				MainCharacter->SetActorRotation(LookAtRotationYaw);
			}
			if(MainCharacterAnimInstance)
			{
				MainCharacterAnimInstance->IsTalking = true;
			}
			if(NPCAnimInstance)
			{
				NPCAnimInstance->IsTalking = true;
			}
			// 处于对话过程中时，增加MainCharacter和NPC的Happiness值
			GetWorldTimerManager().SetTimer(TimerHandle_4, this, &ANPC_Interactable::IncreaseHappiness, 0.5f, true);
			//	如果玩家在对话过程中移动了则中断对话逻辑
			GetWorldTimerManager().SetTimer(TimerHandle_2, this, &ANPC_Interactable::IsMoving, 0.1f, true);
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
		// 播放咳嗽声
		if(CoughAudio != nullptr && AudioController == false)
		{
			CoughAudio->bLooping = false;
			UGameplayStatics::PlaySound2D(GetWorld(), CoughAudio, 1.0f);
			AudioController = true;
		}
		if(Risk + RiskIncreaseRate < 100.0f)
		{
			Risk += RiskIncreaseRate;
		}else
		{
			Risk = 100.0f;
		}
	}else
	{
		if(AudioManager != nullptr && AudioController == true)
		{
			AudioManager->StopSoundsUsingResource(CoughAudio);
			AudioController = false;
		}
	}
}

void ANPC_Interactable::IncreaseHappiness()
{
	if(Happiness + HappinessIncreaseRate < 100.0f)
	{
		Happiness += HappinessIncreaseRate;
	}else
	{
		Happiness = 100.0f;
	}
	if(MainCharacter != nullptr)
	{
		if(MainCharacter->Happiness + MainCharacter->HappinessIncreaseRate < 100.0f)
		{
			MainCharacter->Happiness += MainCharacter->HappinessIncreaseRate;
		}else
		{
			MainCharacter->Happiness = 100.0f;
		}
	}
}

void ANPC_Interactable::AutoDecreaseHappiness()
{
	if(Happiness - HappinessAutoDecreaseRate > 0.0f)
	{
		Happiness -= HappinessAutoDecreaseRate;
	}else
	{
		Happiness = 0.0f;
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
/*
 * 如果玩家在对话过程中移动了则中断对话气泡
 * 中断任务弹出框定时器
 * 中断Happiness增加
 */
void ANPC_Interactable::IsMoving()
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
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle_3);
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle_4);	
		DoOnce = true;
	}
}

void ANPC_Interactable::ShowTaskRequestFrameBP()
{
	// 随机几率弹出任务请求框
	int32 num = FMath::RandRange(1,100);
	if(num <= 20)
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
				int32 OrderNum = GetOrderNumFromTaskArray();
				if(OrderNum != -1 && OrderNum < TaskArray.Num())
				{
					FString String = "<BodyText>" + TaskArray[OrderNum]->TaskCompletedContent + "</>";
					TaskCompletedContent->SetText(FText::FromString(String));
					int32 Index;
					IsTaskInList(Index);
					TaskCompletedFrameInstance->Index = Index;
				}
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
		ProgressBar->SetPercent(Happiness / 100.0f);
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
		ProgressBar->SetPercent(Happiness / 100.0f);
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
// 将玩家动态任务列表与该NPC自己的任务列表相比对，如果玩家动态列表有该NPC任务，则返回该任务在该NPC任务列表中的Index
int32 ANPC_Interactable::GetOrderNumFromTaskArray()
{
	for(auto Row : TaskArray)
	{
		if(MainCharacter->TaskList.Find(Row->TaskIndex) != nullptr)
		{
			const int32 Index = Row->TaskOrderNum;
			return Index;
		}
	}
	return -1;
}

FRotator ANPC_Interactable::GetLookAtRotationYaw(FVector Target)
{
	//获取两个目标之间的偏移量
	const FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(SelfLocation, Target);
	const FRotator LookAtRotationYaw(0.f,LookAtRotation.Yaw,0.f);
	return LookAtRotationYaw;
}

void ANPC_Interactable::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, String);
	}
}

