// Fill out your copyright notice in the Description page of Project Settings.


#include "C_MainCharacter.h"

AC_MainCharacter::AC_MainCharacter()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
	
}

void AC_MainCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AC_MainCharacter::ClickEvent(AActor* Target, FKey ButtonPressed)
{
	PrintLog("c");
}

void AC_MainCharacter::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, String);
	}
}
