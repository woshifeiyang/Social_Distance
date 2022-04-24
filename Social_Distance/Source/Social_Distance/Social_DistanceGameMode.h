// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Social_DistanceGameMode.generated.h"

class UInGameInterface;
UCLASS(minimalapi)
class ASocial_DistanceGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASocial_DistanceGameMode();

protected:
	virtual void BeginPlay() override;
	
};



