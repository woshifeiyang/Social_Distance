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
}

void ALevelScript_Main::BeginPlay()
{
	Super::BeginPlay();
	GameInstance = Cast<UMyGameInstance>(GetGameInstance());
	MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AMainCharacter::StaticClass()));
	// 获取所有NPC对象的初始化值
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANPC_Interactable::StaticClass(), InteractableNPCList);
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
		}else
		{
			LoadCharacterDate();
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
		}
	}
}
// 切换关卡时，将场景内Main character和NPC数据传送到Game Instance
void ALevelScript_Main::SwitchLevel()
{
	SaveCharacterDate();
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("EndOfDayMenu"));
}

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

void ALevelScript_Main::LoadCharacterDate()
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

void ALevelScript_Main::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, String);
	}
}
