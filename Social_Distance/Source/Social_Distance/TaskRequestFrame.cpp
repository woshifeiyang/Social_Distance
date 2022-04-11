// Fill out your copyright notice in the Description page of Project Settings.


#include "TaskRequestFrame.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

bool UTaskRequestFrame::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;
	YesButton->OnClicked.AddDynamic(this, &UTaskRequestFrame::AcceptTask);
	MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AMainCharacter::StaticClass()));
	return true;
}

void UTaskRequestFrame::AcceptTask()
{
	PrintLog("Accept Task Successfully");
	if(MainCharacter)
	{
		MainCharacter->InProcess = true;
	}
	RemoveFromParent();
	UGameplayStatics::SetGamePaused(GetWorld(),false);
}

void UTaskRequestFrame::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, String);
	}
}
