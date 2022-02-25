// Fill out your copyright notice in the Description page of Project Settings.


#include "MovableNPCController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"

void AMovableNPCController::BeginPlay()
{
	
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("test"), Waypoints);
	PrintLog("Waypoint num is: " + FString::FromInt(Waypoints.Num()));
	GoToRandomWaypoint();
	Super::BeginPlay();
}

void AMovableNPCController::GoToRandomWaypoint()
{
	auto index = FMath::RandRange(0, Waypoints.Num() - 1);
	PrintLog("Random index is: " + FString::FromInt(index));
	
	FVector vector = GetActorLocation(Waypoints[index]);
	PrintLog("vector is: " + vector.ToString());
	MoveToLocation(vector);
	//MoveToActor(GetRandomWaypoint());
}

void AMovableNPCController::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, String);
	}
}

FVector AMovableNPCController::GetActorLocation(AActor* Actor)
{
	return Actor -> GetActorLocation();
}

