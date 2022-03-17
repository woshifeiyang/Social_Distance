// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.h"
#include "NiagaraComponent.h"
#include "Components/WidgetComponent.h"
#include "NPC_Interactable.generated.h"

UCLASS()
class SOCIAL_DISTANCE_API ANPC_Interactable : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPC_Interactable();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterProperty)
		FString Name;
	
	UPROPERTY()
		float Loneliness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterProperty)
		float InitLoneliness;

	UPROPERTY()
		float Risk;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterProperty)
		float InitRisk;

	UPROPERTY(BlueprintReadOnly)
		FVector SelfLocation;

	UPROPERTY(BlueprintReadOnly)
		float Distance;

	UPROPERTY(BlueprintReadOnly)
		bool IsIndoor;

	UPROPERTY(BlueprintReadOnly)
		bool HaveMask;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float RiskRangeValue;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float LonelinessDeclineRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float RiskIncreaseRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float LineDisappearingRange;
	
	UPROPERTY()
		float ConversationalDistance;
	
	UPROPERTY()
		AMainCharacter* MainCharacter;

	UPROPERTY()
		UWidgetComponent* MainBubble;

	UPROPERTY()
		TArray<AActor*> Actors;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UNiagaraComponent* LineEffect;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UWidgetComponent* Bubble;

		bool DoOnce;
	
	FTimerHandle TimerHandle_1;

	FTimerHandle TimerHandle_2;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void NotifyActorOnClicked(FKey ButtonPressed = EKeys::LeftMouseButton) override;

	virtual void NotifyActorBeginCursorOver() override;
	
	UFUNCTION()
		void UpdateState();

	UFUNCTION()
		void DestroyNiagaraComponent(UNiagaraComponent* NiagaraComponent);

	UFUNCTION(BlueprintCallable)
		void SetLineEffect();

	UFUNCTION()
		void CloseMCBubble();
<<<<<<< HEAD

	UFUNCTION()
		void ShowTaskRequestUI();

	UFUNCTION()
		void InitClickBubbleBlueprint();
=======
>>>>>>> parent of aece2e6 (TaskRequestUI)
	
	UFUNCTION()
		void PrintLog(FString String);

};
