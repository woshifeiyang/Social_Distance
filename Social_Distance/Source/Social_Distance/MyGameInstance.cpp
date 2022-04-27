// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

void UMyGameInstance::Init()
{
	Super::Init();
	
	TimeOfDay = 300.0f;
	DayLoop = 1;
	
}
