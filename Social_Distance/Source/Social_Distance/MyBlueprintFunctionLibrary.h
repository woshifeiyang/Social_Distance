// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Particles/ParticleSystemComponent.h"
#include "MyBlueprintFunctionLibrary.generated.h"


/**
 * 
 */
UCLASS()
class SOCIAL_DISTANCE_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable)
		static void PrintLog(FString String);

	UFUNCTION(BlueprintCallable)
		static void SetNiagaraEffect(UFXSystemComponent* UFXComponent, FVector NPCVector, FVector PlayerVector);
	
};
