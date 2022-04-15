// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InGameInterface.generated.h"

/**
 * 
 */
UCLASS()
class SOCIAL_DISTANCE_API UInGameInterface : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
		class URichTextBlock* TaskListContent_1;

	UPROPERTY(meta = (BindWidget))
		class URichTextBlock* TaskListContent_2;

	UPROPERTY(meta = (BindWidget))
		class URichTextBlock* TaskListContent_3;

	UPROPERTY(meta = (BindWidget))
		class URichTextBlock* TaskListTips_1_1;

	UPROPERTY(meta = (BindWidget))
		class URichTextBlock* TaskListTips_1_2;

	UPROPERTY(meta = (BindWidget))
		class URichTextBlock* TaskListTips_2_1;

	UPROPERTY(meta = (BindWidget))
		class URichTextBlock* TaskListTips_2_2;

	UPROPERTY(meta = (BindWidget))
		class URichTextBlock* TaskListTips_3_1;

	UPROPERTY(meta = (BindWidget))
		class URichTextBlock* TaskListTips_3_2;
};
