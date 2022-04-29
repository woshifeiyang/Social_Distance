// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelScript_Main.h"

#include "NPC_Interactable.h"
#include "Kismet/GameplayStatics.h"

ALevelScript_Main::ALevelScript_Main()
{
	
}

void ALevelScript_Main::BeginPlay()
{
	Super::BeginPlay();
	GameInstance = Cast<UMyGameInstance>(GetGameInstance());
	if(GameInstance != nullptr)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_1, this, &ALevelScript_Main::SwitchLevel, GameInstance->TimeOfDay, false);
		if(GameInstance->DayLoop == 1)
		{
			// 获取所有NPC对象的初始化值
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANPC_Interactable::StaticClass(), InteractableNPCList);
		}else
		{
			
		}
	}
	MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AMainCharacter::StaticClass()));
	PrintLog("The number of npc is:" + FString::FromInt(InteractableNPCList.Num()));
}
// 切换关卡时，将场景内Main character和NPC数据传送到Game Instance
void ALevelScript_Main::SwitchLevel()
{
	GameInstance->MC_Happiness = MainCharacter->Happiness;
	GameInstance->MC_Risk = MainCharacter->Risk;
	
	for(const auto Actor : InteractableNPCList)
	{
		ANPC_Interactable* NPC = Cast<ANPC_Interactable>(Actor);
		if(NPC != nullptr)
		{
			FNPC_Data Data;
			Data.Name = NPC->Name;
			Data.Happiness = NPC->Happiness;
			Data.Risk = NPC->Risk;
			GameInstance->NPC_Data.Add(NPC->Name, Data);
		}
		
	}
	
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("EndOfDayMenu"));
}

void ALevelScript_Main::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, String);
	}
}
