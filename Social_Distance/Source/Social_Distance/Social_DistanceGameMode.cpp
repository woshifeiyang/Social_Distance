// Copyright Epic Games, Inc. All Rights Reserved.

#include "Social_DistanceGameMode.h"
#include "Social_DistanceCharacter.h"
#include "C_MainCharacter.h"
#include "InGameInterface.h"
#include "Struct_TaskProperty.h"
#include "Components/RichTextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

ASocial_DistanceGameMode::ASocial_DistanceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	PlayerControllerClass = AC_MainCharacter::StaticClass();
	ConstructorHelpers::FClassFinder<UInGameInterface> InGameInterfaceBPClass(TEXT("UserWidget'/Game/UI/WB_InGameInterface.WB_InGameInterface_C'"));
	if(InGameInterfaceBPClass.Succeeded())
	{
		InGameInterfaceUI = InGameInterfaceBPClass.Class;
	}
}

void ASocial_DistanceGameMode::BeginPlay()
{
	Super::BeginPlay();
	MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AMainCharacter::StaticClass()));
	InGameInterfaceInstance = Cast<UInGameInterface>(CreateWidget(GetWorld(), InGameInterfaceUI));
	InGameInterfaceInstance->AddToViewport();
	InitRickTextArray();
	GetWorldTimerManager().SetTimer(TimerHandle_1, this, &ASocial_DistanceGameMode::ShowTaskList, 1.0f, true);
}
// 定时刷新任务列表信息，固定最多只能显示三条任务内容
void ASocial_DistanceGameMode::ShowTaskList()
{
	if(MainCharacter != nullptr)
	{
		const FString ContentFormat_1 = "<BodyText>- ";
		const FString TipFormat_1 = " <BodyText>- ";
		const FString TipDeletedFormat_1 = " <DeletedText>- ";
		const FString Format_2 = "</>";
		FString TaskContent;	
		FString TaskTip_1;
		FString TaskTip_2;
		if(MainCharacter->TaskList.Num() == 0)
		{
			InGameInterfaceInstance->TaskListContent_1->SetText(FText::FromString(""));
			InGameInterfaceInstance->TaskListContent_2->SetText(FText::FromString(""));
			InGameInterfaceInstance->TaskListContent_3->SetText(FText::FromString(""));
			InGameInterfaceInstance->TaskListTips_1_1->SetText(FText::FromString(""));
			InGameInterfaceInstance->TaskListTips_1_2->SetText(FText::FromString(""));
			InGameInterfaceInstance->TaskListTips_2_1->SetText(FText::FromString(""));
			InGameInterfaceInstance->TaskListTips_2_2->SetText(FText::FromString(""));
			InGameInterfaceInstance->TaskListTips_3_1->SetText(FText::FromString(""));
			InGameInterfaceInstance->TaskListTips_3_2->SetText(FText::FromString(""));
		}
		else
		{
			TArray<int> KeysArray;
			MainCharacter->TaskList.GetKeys(KeysArray);
			for(int32 i = 0, Count = 0; Count < RichTextArray.Num(); Count += 3, i++)
			{
				if(i < MainCharacter->TaskList.Num())
				{
					GetInfoFromDataTable(KeysArray[i], TaskContent, TaskTip_1, TaskTip_2);
					RichTextArray[Count]->SetText(FText::FromString(ContentFormat_1 + TaskContent + Format_2));
					if(MainCharacter->TaskList[KeysArray[i]] == 1)
					{
						RichTextArray[Count + 1]->SetText(FText::FromString(TipFormat_1 + TaskTip_1 + Format_2));
					}
					else if(MainCharacter->TaskList[KeysArray[i]] == 2)
					{
						RichTextArray[Count + 1]->SetText(FText::FromString(TipDeletedFormat_1 + TaskTip_1 + Format_2));
					}
					RichTextArray[Count + 2]->SetText(FText::FromString(TipFormat_1 + TaskTip_2 + Format_2));
				}
				else
				{
					RichTextArray[Count]->SetText(FText::FromString(""));
					RichTextArray[Count + 1]->SetText(FText::FromString(""));
					RichTextArray[Count + 2]->SetText(FText::FromString(""));
				}
			}
		}
	}
}

void ASocial_DistanceGameMode::InitRickTextArray()
{
	RichTextArray.Add(InGameInterfaceInstance->TaskListContent_1);
	RichTextArray.Add(InGameInterfaceInstance->TaskListTips_1_1);
	RichTextArray.Add(InGameInterfaceInstance->TaskListTips_1_2);
	RichTextArray.Add(InGameInterfaceInstance->TaskListContent_2);
	RichTextArray.Add(InGameInterfaceInstance->TaskListTips_2_1);
	RichTextArray.Add(InGameInterfaceInstance->TaskListTips_2_2);
	RichTextArray.Add(InGameInterfaceInstance->TaskListContent_3);
	RichTextArray.Add(InGameInterfaceInstance->TaskListTips_3_1);
	RichTextArray.Add(InGameInterfaceInstance->TaskListTips_3_2);
}

// 从数据表中根据TaskIndex提取TaskContent, TaskTips
void ASocial_DistanceGameMode::GetInfoFromDataTable(int32 TaskIndex, FString& TaskContent, FString& TaskTip_1, FString& TaskTip_2)
{
	FString ContextString;
	if(MainCharacter->TaskPropertyDataTable != nullptr)
	{
		TArray<FName> RowNames = MainCharacter->TaskPropertyDataTable->GetRowNames();
		for(auto& name : RowNames)
		{
			FTaskProperty* Row = MainCharacter->TaskPropertyDataTable->FindRow<FTaskProperty>(name, ContextString);
			if(Row != nullptr && Row->TaskIndex == TaskIndex)
			{
				TaskContent = Row->TaskContent;
				TaskTip_1 = Row->TaskTip_1;
				TaskTip_2 = Row->TaskTip_2;
			}
		}
	}
}
