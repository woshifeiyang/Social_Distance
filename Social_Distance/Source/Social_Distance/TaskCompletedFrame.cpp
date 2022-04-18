// Fill out your copyright notice in the Description page of Project Settings.


#include "TaskCompletedFrame.h"
#include "Struct_TaskProperty.h"
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
		// 从数据表中提取与NPC名字匹配的行并加入数组中
		if(MainCharacter->TaskPropertyDataTable != nullptr)
		{
			TArray<FName> RowNames = MainCharacter->TaskPropertyDataTable->GetRowNames();
			for(auto& Name : RowNames)
			{
				FString ContextString;
				FTaskProperty* Row = MainCharacter->TaskPropertyDataTable->FindRow<FTaskProperty>(Name, ContextString);
				if(Row != nullptr && Row->TaskIndex == Index)
				{
					if(MainCharacter->Risk - Row->MCReward_Risk > 0.0f)
					{
						MainCharacter->Risk -= Row->MCReward_Risk;
					}else
					{
						MainCharacter->Risk = 0;
					}
				}
			}
		}
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


