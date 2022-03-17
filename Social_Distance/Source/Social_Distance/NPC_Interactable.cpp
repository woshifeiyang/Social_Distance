// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC_Interactable.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
<<<<<<< HEAD
#include "TaskRequestFrame.h"
<<<<<<< HEAD
#include "Components/ProgressBar.h"
#include "Components/RichTextBlock.h"
=======
>>>>>>> parent of aece2e6 (TaskRequestUI)
=======
>>>>>>> parent of 1616322 (Loneliness & Name will change)

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
	// 创建Widget组件并绑定控件蓝图
	Bubble = CreateDefaultSubobject<UWidgetComponent>(TEXT("Bubble"));
	Bubble->SetupAttachment(GetMesh());
	ConstructorHelpers::FClassFinder<UUserWidget> BubbleClass(TEXT("UserWidget'/Game/UI/WB_NPCName.WB_NPCName_C'"));
	if(BubbleClass.Succeeded())
	{
		Bubble->SetWidgetClass(BubbleClass.Class);
	}else
	{
		PrintLog("Can not find BubbleClass");
	}
	Bubble->SetWidgetSpace(EWidgetSpace::Screen);
	Bubble->SetDrawAtDesiredSize(true);
<<<<<<< HEAD
	// 绑定任务弹出框蓝图
	ConstructorHelpers::FClassFinder<UUserWidget> TaskRequestBPClass(TEXT("UserWidget'/Game/UI/WB_TaskRequestFrame.WB_TaskRequestFrame_C'"));
	if(TaskRequestBPClass.Succeeded())
	{
		PrintLog("Have found TaskRequestBPClass");
		TaskFrameUI = TaskRequestBPClass.Class;
	}
=======
>>>>>>> parent of aece2e6 (TaskRequestUI)
}

// Called when the game starts or when spawned
void ANPC_Interactable::BeginPlay()
{
	Super::BeginPlay();
	
	Loneliness = InitLoneliness;
	Risk = InitRisk;
	IsIndoor = false;
	DoOnce = true;
	ConversationalDistance = 500.0f;				// 可触发点击事件距离
	Bubble->SetVisibility(false);					// 初始化默认气泡不显示
	Bubble->SetRelativeLocation(FVector(0, 0, 250));
	LineEffect->SetRenderCustomDepth(true);
	
	MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AMainCharacter::StaticClass()));
	if(MainCharacter)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_1, this, &ANPC_Interactable::UpdateState, 0.5f, true);
	}
	// 获取Main character对象的Bubble控件引用
	TArray<UActorComponent*> FoundComponents = MainCharacter->GetComponentsByTag(UWidgetComponent::StaticClass(),"Bubble");
	MainBubble = Cast<UWidgetComponent>(FoundComponents[0]);
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
		Bubble->SetVisibility(true);
		MainBubble->SetVisibility(true);
		if(DoOnce)
		{
			GetWorldTimerManager().SetTimer(TimerHandle_2, this, &ANPC_Interactable::CloseMCBubble, 0.5f, true);
			DoOnce = false;
		}
	}
}

void ANPC_Interactable::NotifyActorBeginCursorOver()
{
	Super::NotifyActorBeginCursorOver();
	PrintLog("Cursor Over");
}
/* 更新风险值和孤单值，更新对话框是否可视
 * Loneliness = Loneliness - 孤单下降系数
 * Risk = Risk + 风险上升系数
 * 当距离超过一定范围对话框消失
 */
void ANPC_Interactable::UpdateState()
{
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
	if(Distance > ConversationalDistance)
	{
		Bubble->SetVisibility(false);
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
	if(Distance > ConversationalDistance)
	{
		MainBubble->SetVisibility(false);
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle_2);
		DoOnce = true;
	}
}

<<<<<<< HEAD
void ANPC_Interactable::ShowTaskRequestUI()
{
	if(Distance <= ConversationalDistance)
	{
		int32 num = FMath::RandRange(1,100);
		if(num <= 20)
		{
			if(TaskFrameUI != nullptr)
			{
				CreateWidget(GetWorld(), TaskFrameUI)->AddToViewport();
				GetWorld()->GetTimerManager().ClearTimer(TimerHandle_3);
				UGameplayStatics::SetGamePaused(GetWorld(),true);
			}
		}
	}else
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle_3);
	}
}

<<<<<<< HEAD
void ANPC_Interactable::InitClickBubbleBlueprint()
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
=======
>>>>>>> parent of aece2e6 (TaskRequestUI)
=======
>>>>>>> parent of 1616322 (Loneliness & Name will change)

void ANPC_Interactable::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, String);
	}
}

