// Fill out your copyright notice in the Description page of Project Settings.


#include "C_InteractableNPC.h"

AC_InteractableNPC::AC_InteractableNPC()
{
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
	OnClicked.AddDynamic(this, &AC_InteractableNPC::ClickEvent);
}

void AC_InteractableNPC::BeginPlay()
{
	
}

void AC_InteractableNPC::ClickEvent(AActor* Target, FKey ButtonPressed)
{
	PrintLog("cc");
}

void AC_InteractableNPC::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, String);
	}
}




