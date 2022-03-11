// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC_Interactable.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"

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
	}
	// 创建Niagara组件并绑定聊天气泡特效
	Bubble = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Bubble"));
	Bubble->SetupAttachment(RootComponent);
	ConstructorHelpers::FObjectFinder<UNiagaraSystem> BubbleObj(TEXT("NiagaraSystem'/Game/StarterContent/VFX/Icons/NE_bubble2.NE_bubble2'"));
	if(BubbleObj.Succeeded())
	{
		Bubble->SetAsset(BubbleObj.Object);
	}
	
}

// Called when the game starts or when spawned
void ANPC_Interactable::BeginPlay()
{
	Super::BeginPlay();
	
	Loneliness = InitLoneliness;
	Risk = InitRisk;
	IsIndoor = false;
	EffectDisappearingRange = 1500.0f;
	
	MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AMainCharacter::StaticClass()));
	if(MainCharacter)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_1, this, &ANPC_Interactable::UpdateState, 0.1f, true);
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
	PrintLog("Click successfully");
}

void ANPC_Interactable::NotifyActorBeginCursorOver()
{
	Super::NotifyActorBeginCursorOver();
	PrintLog("Cursor Over");
}

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
}

void ANPC_Interactable::DestroyNiagaraComponent(UNiagaraComponent* NiagaraComponent)
{
	NiagaraComponent->DestroyComponent();
}

void ANPC_Interactable::SetLineEffect()
{
	if(MainCharacter)
	{
		if(GetDistanceTo(MainCharacter) < EffectDisappearingRange)
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

void ANPC_Interactable::SetBubbleEffect(TArray<UNiagaraSystem*> NiagaraSystems)
{
	FVector Location = Bubble->GetComponentLocation();
	FRotator Rotator = Bubble->GetComponentRotation();
	FVector Scale = Bubble->GetComponentScale();
	FTimerHandle TimerHandle;
	FTimerDelegate TimerDel;
	int32 Index = FMath::RandRange(0, NiagaraSystems.Num() - 1);
	UNiagaraComponent* NiagaraComponent = UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NiagaraSystems[Index], Location, Rotator, Scale);
	TimerDel.BindUFunction(this, FName(TEXT("DestroyNiagaraComponent")), NiagaraComponent);
	if(NiagaraComponent)
	{
		GetWorldTimerManager().SetTimer(TimerHandle, TimerDel, 2.0f, false);
	}
}

void ANPC_Interactable::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, String);
	}
}

