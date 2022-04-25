// Copyright Epic Games, Inc. All Rights Reserved.

#include "Social_DistanceGameMode.h"

#include "C_MainCharacter.h"
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
}

void ASocial_DistanceGameMode::BeginPlay()
{
	Super::BeginPlay();
}
