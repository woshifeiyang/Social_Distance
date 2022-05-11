// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainCharacter.h"
#include "MyGameInstance.h"
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
	UPROPERTY()
		UMyGameInstance* GameInstance;
	
	UPROPERTY()
		AMainCharacter* MainCharacter;
	
	UPROPERTY()
		TArray<AActor*> InteractableNPCList;

	UPROPERTY()
		TSubclassOf<class UUserWidget> TutorialUI;

	UPROPERTY()
		TSubclassOf<class UUserWidget> StartOfDayUI;

	UPROPERTY()
		UUserWidget* TutorialFrameInstance;

	UPROPERTY()
		UUserWidget* StartOfDayFrameInstance;

	UPROPERTY()
		TArray<URichTextBlock*> RichTextArray;
	
	UPROPERTY()
		TSubclassOf<class UInGameInterface> InGameInterfaceUI;
	
	UPROPERTY()
		UInGameInterface* InGameInterfaceInstance;
	
		FTimerHandle TimerHandle_1;

		FTimerHandle TimerHandle_2;

		FTimerHandle TimerHandle_3;

protected:
	ALevelScript_Main();

	virtual void BeginPlay() override;

	void SwitchLevel();

	void CloseUI();
	
	void SaveCharacterDate();

	void UpdateCharacterState();

	void InitRickTextArray();

	void ShowTaskList();

	void GetInfoFromDataTable(int32 Index, FString& TaskContent, FString& TaskTip_1, FString& TaskTip_2);
	
	void PrintLog(FString String);
};
