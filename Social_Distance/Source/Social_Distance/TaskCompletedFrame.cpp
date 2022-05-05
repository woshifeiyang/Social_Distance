// Fill out your copyright notice in the Description page of Project Settings.


#include "TaskCompletedFrame.h"

#include "NPC_Interactable.h"
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
					if(MainCharacter->Happiness + Row->MCReward_Risk <= 100.0f)
					{
						MainCharacter->Happiness += Row->MCReward_Risk;
					}else
					{
						MainCharacter->Happiness = 100.0f;
					}
					// 获取所有NPC对象
					TArray<AActor*> InteractableNPCList;
					UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANPC_Interactable::StaticClass(), InteractableNPCList);
					for(const auto Actor : InteractableNPCList)
					{
						ANPC_Interactable* NPC = Cast<ANPC_Interactable>(Actor);
						if(NPC->Name == Row->NPC_Name)
						{
							if(NPC->Happiness + Row->NPCReward_Risk <= 100.0f)
							{
								NPC->Happiness += Row->NPCReward_Risk;
							}else
							{
								NPC->Happiness = 100.0f;
							}
						}
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


