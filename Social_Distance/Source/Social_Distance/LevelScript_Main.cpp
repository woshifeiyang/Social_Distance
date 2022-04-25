// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelScript_Main.h"

#include "Kismet/GameplayStatics.h"

ALevelScript_Main::ALevelScript_Main()
{
	
}

void ALevelScript_Main::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(TimerHandle_1, this, &ALevelScript_Main::SwitchLevel, 360.0f, false);
}

void ALevelScript_Main::SwitchLevel()
{
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("EndOfDayMenu"));
}
