// Copyright Epic Games, Inc. All Rights Reserved.

#include "Social_DistanceGameMode.h"
#include "Social_DistanceCharacter.h"
#include "C_MainCharacter.h"
#include "InGameInterface.h"
#include "Components/RichTextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

ASocial_DistanceGameMode::ASocial_DistanceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	PlayerControllerClass = AC_MainCharacter::StaticClass();
	ConstructorHelpers::FClassFinder<UInGameInterface> InGameInterfaceBPClass(TEXT("UserWidget'/Game/UI/WB_InGameInterface.WB_InGameInterface_C'"));
	if(InGameInterfaceBPClass.Succeeded())
	{
		InGameInterfaceUI = InGameInterfaceBPClass.Class;
	}
}

void ASocial_DistanceGameMode::BeginPlay()
{
	Super::BeginPlay();
	MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AMainCharacter::StaticClass()));
	InGameInterfaceInstance = Cast<UInGameInterface>(CreateWidget(GetWorld(), InGameInterfaceUI));
	InGameInterfaceInstance->AddToViewport();
	GetWorldTimerManager().SetTimer(TimerHandle_1, this, &ASocial_DistanceGameMode::ShowTaskList, 1.0f, true);
}

void ASocial_DistanceGameMode::ShowTaskList()
{
	if(MainCharacter != nullptr)
	{
		if(MainCharacter->TaskList.Num() == 0)
		{
			FString String = "";
			InGameInterfaceInstance->TaskListContent_1->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListContent_2->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListContent_3->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListTips_1_1->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListTips_1_2->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListTips_2_1->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListTips_2_2->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListTips_3_1->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListTips_3_2->SetText(FText::FromString(String));
		}
		if(MainCharacter->TaskList.Num() == 1)
		{
			FString String = "<BodyText> 1 </>";
			InGameInterfaceInstance->TaskListContent_1->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListContent_2->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListContent_3->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListTips_1_1->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListTips_1_2->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListTips_2_1->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListTips_2_2->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListTips_3_1->SetText(FText::FromString(String));
			InGameInterfaceInstance->TaskListTips_3_2->SetText(FText::FromString(String));
		}
	}
}
