// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyGameInstance.h"
#include "GameFramework/SaveGame.h"
#include "CharacterSaveGame.generated.h"

/**
 * 
 */


UCLASS()
class SOCIAL_DISTANCE_API UCharacterSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
		float MC_Risk;

	UPROPERTY(BlueprintReadOnly)
		float MC_Happiness;

	UPROPERTY(BlueprintReadOnly)
		TMap<FString, FNPC_Data> NPC_Data;
	
};
