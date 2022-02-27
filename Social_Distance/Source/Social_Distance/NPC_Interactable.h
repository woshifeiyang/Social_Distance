// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.h"
#include "NPC_Interactable.generated.h"

UCLASS()
class SOCIAL_DISTANCE_API ANPC_Interactable : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPC_Interactable();

	UPROPERTY()
		int32 Loneliness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterProperty)
		int32 InitLoneliness;

	UPROPERTY()
		int32 Risk;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterProperty)
		int32 InitRisk;

	UPROPERTY(BlueprintReadOnly)
		FVector SelfLocation;

	UPROPERTY(BlueprintReadOnly)
		float Distance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterProperty)
		bool IsIndoor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterProperty)
		bool HaveMask;

	UPROPERTY()
		AMainCharacter* MainCharacter;

	UPROPERTY()
		TArray<AActor*> Actors;

	UPROPERTY()
		FTimerHandle TimerHandle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
		void GetDistance();

	UFUNCTION()
		void UpdateLoneliness();

	UFUNCTION()
		void UpdateRisk();
	
	UFUNCTION()
		void PrintLog(FString String);

};
