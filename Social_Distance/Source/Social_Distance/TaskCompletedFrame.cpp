// Fill out your copyright notice in the Description page of Project Settings.


#include "TaskCompletedFrame.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

bool UTaskCompletedFrame::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;
	YesButton->OnClicked.AddDynamic(this, &UTaskCompletedFrame::AcceptSubmitTask);
	NoButton->OnClicked.AddDynamic(this, &UTaskCompletedFrame::RejectSubmitTask);
	MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AMainCharacter::StaticClass()));
	return true;
}

void UTaskCompletedFrame::AcceptSubmitTask()
{
	if(MainCharacter != nullptr)
	{
		MainCharacter->TaskList.Remove(Index);
	}
	RemoveFromParent();
	UGameplayStatics::SetGamePaused(GetWorld(),false);
}

void UTaskCompletedFrame::RejectSubmitTask()
{
	RemoveFromParent();
	UGameplayStatics::SetGamePaused(GetWorld(),false);
}

void UTaskCompletedFrame::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, String);
	}
}


