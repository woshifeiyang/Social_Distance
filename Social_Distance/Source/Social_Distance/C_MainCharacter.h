// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "C_MainCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SOCIAL_DISTANCE_API AC_MainCharacter : public APlayerController
{
	GENERATED_BODY()

	AC_MainCharacter();

	virtual void BeginPlay() override;

	void ClickEvent(AActor* Target, FKey ButtonPressed);
	
	void PrintLog(FString String);
	
};
