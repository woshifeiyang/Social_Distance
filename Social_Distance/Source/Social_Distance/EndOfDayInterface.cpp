// Fill out your copyright notice in the Description page of Project Settings.


#include "EndOfDayInterface.h"

#include "CharacterSaveGame.h"
#include "NPC_Interactable.h"
#include "Components/RichTextBlock.h"
#include "Kismet/GameplayStatics.h"

bool UEndOfDayInterface::Initialize()
{
	const bool Success = Super::Initialize();
	if (!Success) return false;
	GameInstance = Cast<UMyGameInstance>(GetGameInstance());
	// 获取SaveGame对象
	SaveGameInstance = Cast<UCharacterSaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("SaveGame"),0));
	if(SaveGameInstance != nullptr)
	{
		InitSummaryPage();
	}
	if(GameInstance != nullptr)
	{
		
	}
	return true;
}

void UEndOfDayInterface::InitSummaryPage()
{
	// Happiness Level
	if(SaveGameInstance->MC_Happiness <= 100.0f && SaveGameInstance->MC_Happiness > 80.0f)
	{
		const FString String = "<TitleText>Very Happy</>";
		Happiness_Level->SetText(FText::FromString(String));
	}else if(SaveGameInstance->MC_Happiness <= 80.0f && SaveGameInstance->MC_Happiness > 60.0f)
	{
		const FString String = "<TitleText>Happy</>";
		Happiness_Level->SetText(FText::FromString(String));
	}else if(SaveGameInstance->MC_Happiness <= 60.0f && SaveGameInstance->MC_Happiness > 40.0f)
	{
		const FString String = "<TitleText>Neutral</>";
		Happiness_Level->SetText(FText::FromString(String));
	}else if(SaveGameInstance->MC_Happiness <= 40.0f && SaveGameInstance->MC_Happiness > 20.0f)
	{
		const FString String = "<TitleText>Lonely</>";
		Happiness_Level->SetText(FText::FromString(String));
	}else if(SaveGameInstance->MC_Happiness <= 20.0f && SaveGameInstance->MC_Happiness >= 0.0f)
	{
		const FString String = "<TitleText>Very Lonely</>";
		Happiness_Level->SetText(FText::FromString(String));
	}
	// Risk Level
	if(SaveGameInstance->MC_Risk >= 0.0f && SaveGameInstance->MC_Risk < 20.0f)
	{
		const FString String = "<TitleText>Very Low</>";
		Risk_Level->SetText(FText::FromString(String));
	}else if(SaveGameInstance->MC_Risk >= 20.0f && SaveGameInstance->MC_Risk < 40.0f)
	{
		const FString String = "<TitleText>Low</>";
		Risk_Level->SetText(FText::FromString(String));
	}else if(SaveGameInstance->MC_Risk >= 40.0f && SaveGameInstance->MC_Risk < 60.0f)
	{
		const FString String = "<TitleText>Medium</>";
		Risk_Level->SetText(FText::FromString(String));
	}else if(SaveGameInstance->MC_Risk >= 60.0f && SaveGameInstance->MC_Risk < 80.0f)
	{
		const FString String = "<TitleText>High</>";
		Risk_Level->SetText(FText::FromString(String));
	}else if(SaveGameInstance->MC_Risk >= 80.0f && SaveGameInstance->MC_Risk <= 100.0f)
	{
		const FString String = "<TitleText>Very High</>";
		Risk_Level->SetText(FText::FromString(String));
	}
	// NPC who has Covid
	FString String;
	for(auto Element : SaveGameInstance->NPC_Data)
	{
		if(Element.Value.Risk >= 90.0f)
		{
			String += Element.Key;
			String += "  ";
		}
	}
	Covid_NPC->SetText(FText::FromString("<TitleText>" + String + "</>"));
	// NPC who are depressed
	String = "";
	for(auto Element : SaveGameInstance->NPC_Data)
	{
		if(Element.Value.Happiness <= 10.0f)
		{
			String += Element.Key;
			String += "  ";
		}
	}
	Depressed_NPC->SetText(FText::FromString("<TitleText>" + String + "</>"));
}


void UEndOfDayInterface::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, String);
	}
}
