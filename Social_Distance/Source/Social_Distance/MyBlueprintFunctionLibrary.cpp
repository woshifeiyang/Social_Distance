// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "MainCharacter.h"
#include "NiagaraSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

void UMyBlueprintFunctionLibrary::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, String);
	}
}

void UMyBlueprintFunctionLibrary::SetNiagaraEffect(UFXSystemComponent* UFXComponent, FVector NPCVector, FVector PlayerVector)
{
	//UWorld* World = GEngine->GameViewport->GetWorld();
	//AMainCharacter* MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetActorOfClass(World, AMainCharacter::StaticClass()));
	//FVector NPCPostion(MainCharacter -> SelfLocation.X, MainCharacter -> SelfLocation.Y, MainCharacter -> SelfLocation.Z - 80);
}

