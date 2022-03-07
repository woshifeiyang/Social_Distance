// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.h"
#include "Particles/ParticleSystemComponent.h"
#include "NPC_Interactable.generated.h"

UCLASS()
class SOCIAL_DISTANCE_API ANPC_Interactable : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPC_Interactable();

	UPROPERTY()
		float Loneliness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterProperty)
		float InitLoneliness;

	UPROPERTY()
		float Risk;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterProperty)
		float InitRisk;

	UPROPERTY(BlueprintReadOnly)
		FVector SelfLocation;

	UPROPERTY(BlueprintReadOnly)
		float Distance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterProperty)
		bool IsIndoor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterProperty)
		bool HaveMask;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float RiskRangeValue;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float LonelinessDeclineRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float RiskIncreaseRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = WalkingProperty)
		float EffectDisappearingDistance;

	UPROPERTY()
		AMainCharacter* MainCharacter;

	UPROPERTY()
		TArray<AActor*> Actors;

	
	FTimerHandle TimerHandle_1;

	FTimerHandle TimerHandle_2;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
		void UpdateState();

	UFUNCTION()
		void UpdateSelfLocation();

	UFUNCTION(BlueprintCallable)
		void SetNiagaraEffect(UFXSystemComponent* UFXComponent);
	
	UFUNCTION()
		void PrintLog(FString String);

};
