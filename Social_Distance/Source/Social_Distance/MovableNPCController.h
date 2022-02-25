// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MovableNPCController.generated.h"

/**
 * 
 */
UCLASS()
class SOCIAL_DISTANCE_API AMovableNPCController : public AAIController
{
	GENERATED_BODY()

public:
	virtual  void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PATH)
		TArray<AActor*> Waypoints;

	UFUNCTION()
		void GoToRandomWaypoint();

	UFUNCTION()
		void PrintLog(FString String);

	UFUNCTION()
		FVector GetActorLocation(AActor* Actor);
};
