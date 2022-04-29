// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyGameInstance.h"
#include "Blueprint/UserWidget.h"
#include "EndOfDayInterface.generated.h"

/**
 * 
 */
UCLASS()
class SOCIAL_DISTANCE_API UEndOfDayInterface : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UMyGameInstance* GameInstance;
	
	UPROPERTY(meta = (BindWidget))
	class URichTextBlock* Happiness_Level;

	UPROPERTY(meta = (BindWidget))
	class URichTextBlock* Risk_Level;

	UPROPERTY(meta = (BindWidget))
	class URichTextBlock* Covid_NPC;

	UPROPERTY(meta = (BindWidget))
	class URichTextBlock* Depressed_NPC;
	
protected:
	virtual bool Initialize() override; // override this, its like beginplay but for UUserWidgets

	void InitSummaryPage();

	void PrintLog(FString String);
};
