// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SOCIAL_DISTANCE_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly)
		float TimeOfDay;

	UPROPERTY(BlueprintReadOnly)
		int32 DayLoop;

	UPROPERTY()
		float MC_Risk;

	UPROPERTY()
		float MC_Happiness;

	UPROPERTY()
		TArray<AActor*> InteractableNPCList;

		FTimerHandle TimerHandle_1;
	
	virtual void Init() override;
	
};
