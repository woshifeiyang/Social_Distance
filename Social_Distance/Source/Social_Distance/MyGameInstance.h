// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

USTRUCT(BlueprintType)
struct FNPC_Data
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite)
		FString Name;
	
	UPROPERTY(BlueprintReadWrite)
		float Happiness;
	
	UPROPERTY(BlueprintReadWrite)
		float Risk;
};

UCLASS()
class SOCIAL_DISTANCE_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly)
		float TimeOfDay;

	UPROPERTY(BlueprintReadOnly)
		int32 DayLoop;
	
		FTimerHandle TimerHandle_1;
	
	virtual void Init() override;
	
};


