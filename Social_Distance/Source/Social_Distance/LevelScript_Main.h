// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "LevelScript_Main.generated.h"

/**
 * 
 */
UCLASS()
class SOCIAL_DISTANCE_API ALevelScript_Main : public ALevelScriptActor
{
	GENERATED_BODY()

public:
	FTimerHandle TimerHandle_1;

protected:
	ALevelScript_Main();

	virtual void BeginPlay() override;

	void SwitchLevel();
};
