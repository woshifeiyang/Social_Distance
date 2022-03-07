// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC_Interactable.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"

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
		//PrintLog("Main Character Loneliness is" + FString::SanitizeFloat(MainCharacter->Loneliness));
		GetWorldTimerManager().SetTimer(TimerHandle_1, this, &ANPC_Interactable::UpdateState, 0.5f, true);
	}
	UpdateSelfLocation();
}

// Called every frame
void ANPC_Interactable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
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

void ANPC_Interactable::UpdateSelfLocation()
{
	SelfLocation = GetActorLocation();
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

void ANPC_Interactable::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, String);
	}
}

