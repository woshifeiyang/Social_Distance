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

void ANPC_Interactable::SetNiagaraEffect(UFXSystemComponent* UFXComponent)
{
	if(MainCharacter)
	{
		if(GetDistanceTo(MainCharacter) < EffectDisappearingRange)
		{
			UFXComponent->SetVisibility(true);
			FVector NPCPosition(SelfLocation.X, SelfLocation.Y, SelfLocation.Z - 80);
			FVector MCPosition(MainCharacter -> SelfLocation.X, MainCharacter -> SelfLocation.Y, MainCharacter -> SelfLocation.Z - 80);
			UFXComponent -> SetVectorParameter("NPC_POS", NPCPosition);
			UFXComponent -> SetVectorParameter("Player_POS", MCPosition);
		}else
		{
			UFXComponent->SetVisibility(false);
		}
	}
}

void ANPC_Interactable::SetBubbleEffect(UFXSystemComponent* UFXComponent, TArray<UNiagaraSystem*> NiagaraSystems)
{
	FVector Location = UFXComponent->GetComponentLocation();
	FRotator Rotator = UFXComponent->GetComponentRotation();
	FVector Scale = UFXComponent->GetComponentScale();
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

