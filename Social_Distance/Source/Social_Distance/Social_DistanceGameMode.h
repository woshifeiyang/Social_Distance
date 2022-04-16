// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MainCharacter.h"
#include "Components/RichTextBlock.h"
#include "Engine/DataTable.h"
#include "GameFramework/GameModeBase.h"
#include "Social_DistanceGameMode.generated.h"

class UInGameInterface;
UCLASS(minimalapi)
class ASocial_DistanceGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASocial_DistanceGameMode();

	UPROPERTY()
		AMainCharacter* MainCharacter;

	UPROPERTY()
		UInGameInterface* InGameInterfaceInstance;

	UPROPERTY()
		TArray<URichTextBlock*> RichTextArray;

	UPROPERTY(EditAnywhere)
		UDataTable* TaskPropertyDataTable;
	
		TSubclassOf<class UInGameInterface> InGameInterfaceUI;

		FTimerHandle TimerHandle_1;
	

protected:
	virtual void BeginPlay() override;

	void ShowTaskList();

	void InitRickTextArray();

	void GetInfoFromDataTable(int32 TaskIndex, FString& TaskContent, FString& TaskTip_1, FString& TaskTip_2);
};



