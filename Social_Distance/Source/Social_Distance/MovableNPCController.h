// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NPC_Movable.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MovableNPCController.generated.h"

/**
 * 
 */
UCLASS()
class SOCIAL_DISTANCE_API AMovableNPCController : public AAIController
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
		FTimerHandle TimerHandle;
	
	UPROPERTY()
		int32 Index;
	
	UPROPERTY()
		UCharacterMovementComponent* MovementComponent;
	
	UPROPERTY()
		ANPC_Movable* MyCharacter;
	
	virtual  void BeginPlay() override;

	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;
	
	UFUNCTION()
		void WalkingInPath();

	UFUNCTION()
		void PrintLog(FString String);
};
