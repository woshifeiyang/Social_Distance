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
	
	Loneliness = InitLoneliness;
	Risk = InitRisk;
	IsIndoor = false;
}

// Called when the game starts or when spawned
void ANPC_Interactable::BeginPlay()
{
	Super::BeginPlay();
	MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AMainCharacter::StaticClass()));
	if(MainCharacter)
	{
		PrintLog("cast to main character success");
		GetWorldTimerManager().SetTimer(TimerHandle, this, &ANPC_Interactable::GetDistance, 0.5f, false);
	}
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

void ANPC_Interactable::GetDistance()
{
	Distance = GetDistanceTo(MainCharacter);
}

void ANPC_Interactable::UpdateLoneliness()
{
	
}

void ANPC_Interactable::UpdateRisk()
{
	
}

void ANPC_Interactable::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, String);
	}
}

