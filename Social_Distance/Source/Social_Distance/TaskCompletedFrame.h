// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainCharacter.h"
#include "Blueprint/UserWidget.h"
#include "TaskCompletedFrame.generated.h"

/**
 * 
 */
UCLASS()
class SOCIAL_DISTANCE_API UTaskCompletedFrame : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
		class URichTextBlock* TaskCompletedContent;

	UPROPERTY(meta = (BindWidget))
		class UButton* YesButton;
	
	UPROPERTY(meta = (BindWidget))
		class UButton* NoButton;

		int32 Index;
	
	UPROPERTY()
		AMainCharacter* MainCharacter;

protected:
	UFUNCTION()
		void AcceptSubmitTask();

	UFUNCTION()
		void RejectSubmitTask();

	UFUNCTION()
		void PrintLog(FString String);
	
	virtual bool Initialize() override; // override this, its like beginplay but for UUserWidgets
};
