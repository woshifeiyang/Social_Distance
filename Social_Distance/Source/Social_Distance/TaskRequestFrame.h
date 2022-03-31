// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/RichTextBlock.h"
#include "TaskRequestFrame.generated.h"

/**
 * 
 */
UCLASS()
class SOCIAL_DISTANCE_API UTaskRequestFrame : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
		class URichTextBlock* TaskRequest;

	UPROPERTY(meta = (BindWidget))
		class URichTextBlock* TaskContent;

	UPROPERTY(meta = (BindWidget))
		class UButton* YesButton;
	
	UPROPERTY(meta = (BindWidget))
		class UButton* NoButton;
	
protected:
	UFUNCTION()
		void AcceptTask();

	UFUNCTION()
		void PrintLog(FString String);
	
	virtual bool Initialize() override; // override this, its like beginplay but for UUserWidgets
};
