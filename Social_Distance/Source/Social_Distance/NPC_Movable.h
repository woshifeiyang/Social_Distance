// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Particles/ParticleSystemComponent.h"
#include "MainCharacter.h"
#include "NiagaraComponent.h"
#include "NPC_Movable.generated.h"

UCLASS()
class SOCIAL_DISTANCE_API ANPC_Movable : public ACharacter
{
	GENERATED_BODY()
	
public:
	// Sets default values for this character's properties
	ANPC_Movable();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = PATH)
		TArray<AActor*> Waypoints;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = WalkingProperty)
		float WaitTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = WalkingProperty)
		int32 WalkingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = WalkingProperty)
		float LineDisappearingRange;

	UPROPERTY(BlueprintReadOnly)
		FVector SelfLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UNiagaraComponent* LineEffect;
	
	UPROPERTY()
		AMainCharacter* MainCharacter;
	
		FTimerHandle TimerHandle;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
		void SetLineEffect();

	UFUNCTION()
		void PrintLog(FString String);
};
