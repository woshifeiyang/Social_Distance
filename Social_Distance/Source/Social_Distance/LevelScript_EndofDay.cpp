// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelScript_EndofDay.h"

ALevelScript_EndofDay::ALevelScript_EndofDay()
{
	// 绑定任务弹出框蓝图
	ConstructorHelpers::FClassFinder<UEndOfDayInterface> EndOfDayBPClass(TEXT("UserWidget'/Game/UI/WB_EndOfDay.WB_EndOfDay_C'"));
	if(EndOfDayBPClass.Succeeded())
	{
		EndOfDayInterfaceUI = EndOfDayBPClass.Class;
	}
}

void ALevelScript_EndofDay::BeginPlay()
{
	Super::BeginPlay();
	EndOfDayUIInstance = Cast<UEndOfDayInterface>(CreateWidget(GetWorld(), EndOfDayInterfaceUI));
	EndOfDayUIInstance->AddToViewport();
}

void ALevelScript_EndofDay::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, String);
	}
}
