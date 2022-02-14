// Copyright Epic Games, Inc. All Rights Reserved.

#include "Social_DistanceGameMode.h"
#include "Social_DistanceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASocial_DistanceGameMode::ASocial_DistanceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
