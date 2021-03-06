// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC_Movable.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ANPC_Movable::ANPC_Movable()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCharacterMovement()->MaxWalkSpeed = WalkingSpeed;
}

// Called when the game starts or when spawned
void ANPC_Movable::BeginPlay()
{
	Super::BeginPlay();
	MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AMainCharacter::StaticClass()));
}

// Called every frame
void ANPC_Movable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SelfLocation = GetActorLocation();
}

// Called to bind functionality to input
void ANPC_Movable::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANPC_Movable::SetNiagaraEffect(UFXSystemComponent* UFXComponent)
{
	if(MainCharacter)
	{
		if(GetDistanceTo(MainCharacter) < LineDisappearingRange)
		{
			UFXComponent->SetVisibility(true);
			FVector NPCPosition(SelfLocation.X, SelfLocation.Y, SelfLocation.Z - 80);
			FVector MCPosition(MainCharacter -> SelfLocation.X, MainCharacter -> SelfLocation.Y, MainCharacter -> SelfLocation.Z - 80);
			UFXComponent -> SetVectorParameter("NPC_POS", NPCPosition);
			UFXComponent -> SetVectorParameter("Player_POS", MCPosition);
		} else
		{
			UFXComponent->SetVisibility(false);
		}
	}
}

void ANPC_Movable::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, String);
	}
}




