// Fill out your copyright notice in the Description page of Project Settings.


#include "TaskRequestFrame.h"

#include "Components/Button.h"

bool UTaskRequestFrame::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;
	YesButton->OnClicked.AddDynamic(this, &UTaskRequestFrame::AcceptTask);
	return true;
}

void UTaskRequestFrame::AcceptTask()
{
	PrintLog("Accept Task Successfully");
}

void UTaskRequestFrame::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, String);
	}
}
