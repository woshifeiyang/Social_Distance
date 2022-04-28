// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EndOfDayInterface.h"
#include "MyGameInstance.h"
#include "Engine/LevelScriptActor.h"
#include "LevelScript_EndofDay.generated.h"

/**
 * 
 */
UCLASS()
class SOCIAL_DISTANCE_API ALevelScript_EndofDay : public ALevelScriptActor
{
	GENERATED_BODY()
public:
	UPROPERTY()
		TSubclassOf<class UEndOfDayInterface> EndOfDayInterfaceUI;
	
	UPROPERTY()
		UEndOfDayInterface* EndOfDayUIInstance;

	UPROPERTY()
		UMyGameInstance* GameInstance;
	
protected:
	ALevelScript_EndofDay();
	
	virtual void BeginPlay() override;
	
	void PrintLog(FString String);
};
