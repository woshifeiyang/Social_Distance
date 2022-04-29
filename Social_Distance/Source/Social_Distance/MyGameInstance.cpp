// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

#include "NPC_Interactable.h"
#include "Kismet/GameplayStatics.h"

void UMyGameInstance::Init()
{
	Super::Init();
	
	TimeOfDay = 5.0f;
	DayLoop = 1;
	
}
