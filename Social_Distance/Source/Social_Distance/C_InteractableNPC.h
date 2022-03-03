// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "C_InteractableNPC.generated.h"

/**
 * 
 */
UCLASS()
class SOCIAL_DISTANCE_API AC_InteractableNPC : public APlayerController
{
	GENERATED_BODY()

	AC_InteractableNPC();
	
	virtual void BeginPlay() override;

	UFUNCTION()
		void ClickEvent(AActor* Target, FKey ButtonPressed);
	
	UFUNCTION()
		void PrintLog(FString String);
};
