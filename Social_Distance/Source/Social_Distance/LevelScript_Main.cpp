// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelScript_Main.h"

#include "CharacterSaveGame.h"
#include "NPC_Interactable.h"
#include "Kismet/GameplayStatics.h"

ALevelScript_Main::ALevelScript_Main()
{
	// 绑定游戏指引蓝图
	ConstructorHelpers::FClassFinder<UUserWidget> TutorialBPClass(TEXT("UserWidget'/Game/UI/WB_tutorial.WB_Tutorial_C'"));
	if(TutorialBPClass.Succeeded())
	{
		TutorialUI = TutorialBPClass.Class;
	}
	// 绑定关卡加载UI
	ConstructorHelpers::FClassFinder<UUserWidget> StartOfDayBPClass(TEXT("UserWidget'/Game/UI/WB_StartOfDay.WB_StartofDay_C'"));
	if(StartOfDayBPClass.Succeeded())
	{
		StartOfDayUI = StartOfDayBPClass.Class;
	}
	// 绑定游戏基础界面UI
	ConstructorHelpers::FClassFinder<UInGameInterface> InGameInterfaceBPClass(TEXT("UserWidget'/Game/UI/WB_InGameInterface.WB_InGameInterface_C'"));
	if(InGameInterfaceBPClass.Succeeded())
	{
		InGameInterfaceUI = InGameInterfaceBPClass.Class;
	}
	
}

void ALevelScript_Main::BeginPlay()
{
	Super::BeginPlay();
	GameInstance = Cast<UMyGameInstance>(GetGameInstance());
	MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AMainCharacter::StaticClass()));
	// 获取所有NPC对象并储存在数组中
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANPC_Interactable::StaticClass(), InteractableNPCList);

	// 显示任务列表UI，并实时更新信息
	InGameInterfaceInstance = Cast<UInGameInterface>(CreateWidget(GetWorld(), InGameInterfaceUI));
	InGameInterfaceInstance->AddToViewport();
	InitRickTextArray();
	GetWorldTimerManager().SetTimer(TimerHandle_3, this, &ALevelScript_Main::ShowTaskList, 0.5f, true);
								
	if(GameInstance != nullptr)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_1, this, &ALevelScript_Main::SwitchLevel, GameInstance->TimeOfDay, false);
		if(GameInstance->DayLoop == 1)
		{
			// 获取游戏指引的蓝图对象并显示
			TutorialFrameInstance = Cast<UUserWidget>(CreateWidget(GetWorld(), TutorialUI));
			if(TutorialFrameInstance != nullptr)
			{
				TutorialFrameInstance->AddToViewport();
			}
		}else if(GameInstance->DayLoop > 1 && GameInstance->DayLoop < 15)
		{
			// 加载关卡出场动画
			StartOfDayFrameInstance = Cast<UUserWidget>(CreateWidget(GetWorld(), StartOfDayUI));
			if(StartOfDayFrameInstance != nullptr)
			{
				StartOfDayFrameInstance->AddToViewport();
			}
			GetWorldTimerManager().SetTimer(TimerHandle_2, this, &ALevelScript_Main::CloseUI, 5.0f, false);
			// 更新Main Character和所有NPC的状态信息
			UpdateCharacterState();
			for(const auto Actor : InteractableNPCList)
			{
				ANPC_Interactable* NPC = Cast<ANPC_Interactable>(Actor);
				if(NPC != nullptr)
				{
					if(NPC->Happiness <= 10.0f || NPC->Risk >= 90.0f)
					{
						if(NPC->Destroy())
						{
							PrintLog(NPC->Name + "has been destroyed successfully");
						}else
						{
							PrintLog("Fail to destroy NPC");
						}
					}
				}
			}
		}else
		{
			UGameplayStatics::OpenLevel(GetWorld(), TEXT("StartMenu"));
		}
	}
}
// 切换关卡时，将场景内Main character和NPC数据传送到Game Instance
void ALevelScript_Main::SwitchLevel()
{
	SaveCharacterDate();
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("EndOfDayMenu"));
}
// 关闭关卡出场动画
void ALevelScript_Main::CloseUI()
{
	StartOfDayFrameInstance->RemoveFromParent();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_2);
}
// 将Main Character和所有NPC的信息保存进SaveGameObject中
void ALevelScript_Main::SaveCharacterDate()
{
	UCharacterSaveGame* SaveGameInstance = Cast<UCharacterSaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("SaveGame"),0));
	if(SaveGameInstance == nullptr)
	{
		SaveGameInstance = Cast<UCharacterSaveGame>(UGameplayStatics::CreateSaveGameObject(UCharacterSaveGame::StaticClass()));
	}
	// 将玩家和NPC数据保存到slot
	SaveGameInstance->MC_Happiness = MainCharacter->Happiness;
	SaveGameInstance->MC_Risk = MainCharacter->Risk;
	for(const auto Actor : InteractableNPCList)
	{
		ANPC_Interactable* NPC = Cast<ANPC_Interactable>(Actor);
		if(NPC != nullptr)
		{
			FNPC_Data Data;
			Data.Name = NPC->Name;
			Data.Happiness = NPC->Happiness;
			Data.Risk = NPC->Risk;
			SaveGameInstance->NPC_Data.Add(NPC->Name, Data);
		}
	}
	
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, TEXT("SaveGame"), 0);
}
// 更新Main Character和所有NPC的状态信息
void ALevelScript_Main::UpdateCharacterState()
{
	UCharacterSaveGame* SaveGameInstance = Cast<UCharacterSaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("SaveGame"),0));
	if(SaveGameInstance != nullptr)
	{
		MainCharacter->Happiness = SaveGameInstance->MC_Happiness;
		MainCharacter->Risk = SaveGameInstance->MC_Risk;
		for(const auto Actor : InteractableNPCList)
		{
			ANPC_Interactable* NPC = Cast<ANPC_Interactable>(Actor);
			if(NPC != nullptr)
			{
				NPC->Happiness = SaveGameInstance->NPC_Data[NPC->Name].Happiness;
				NPC->Risk = SaveGameInstance->NPC_Data[NPC->Name].Risk;
			}
		}
		
	} 
	
}

void ALevelScript_Main::InitRickTextArray()
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

void ALevelScript_Main::ShowTaskList()
{
	const FString ContentFormat_1 = "<BodyText>- ";
	const FString TipFormat_1 = " <BodyText>- ";
	const FString TipDeletedFormat_1 = " <DeletedText>- ";
	const FString Format_2 = "</>";
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
		FString TaskContent;	
		FString TaskTip_1;
		FString TaskTip_2;
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

void ALevelScript_Main::GetInfoFromDataTable(int32 Index, FString& TaskContent, FString& TaskTip_1, FString& TaskTip_2)
{
	FString ContextString;
	if(MainCharacter->TaskPropertyDataTable != nullptr)
	{
		TArray<FName> RowNames = MainCharacter->TaskPropertyDataTable->GetRowNames();
		for(auto& name : RowNames)
		{
			FTaskProperty* Row = MainCharacter->TaskPropertyDataTable->FindRow<FTaskProperty>(name, ContextString);
			if(Row != nullptr && Row->TaskIndex == Index)
			{
				TaskContent = Row->TaskContent;
				TaskTip_1 = Row->TaskTip_1;
				TaskTip_2 = Row->TaskTip_2;
			}
		}
	}
}

void ALevelScript_Main::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, String);
	}
}
