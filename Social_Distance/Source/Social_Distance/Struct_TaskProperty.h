// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/Actor.h"
#include "Struct_TaskProperty.generated.h"

UCLASS()
class SOCIAL_DISTANCE_API AStruct_TaskProperty : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStruct_TaskProperty();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

USTRUCT()
struct FTaskProperty : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString NPC_Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString TaskRequest;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString TaskContent;
};