// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.h"
#include "MainCharacterAnimInstance.h"
#include "NiagaraComponent.h"
#include "Struct_TaskProperty.h"
#include "TaskCompletedFrame.h"
#include "Components/WidgetComponent.h"
#include "Engine/DataTable.h"
#include "TaskRequestFrame.h"
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
		float Happiness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterProperty)
		float InitHappiness;

	UPROPERTY()
		float Risk;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterProperty)
		float InitRisk;

	UPROPERTY(BlueprintReadOnly)
		FVector SelfLocation;

	UPROPERTY()
		FVector TalkingPoint;

	UPROPERTY(BlueprintReadOnly)
		float Distance;

	UPROPERTY(BlueprintReadOnly)
		bool IsIndoor;

	UPROPERTY(BlueprintReadOnly)
		bool HaveMask;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float RiskRangeValue;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float HappinessIncreaseRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float RiskIncreaseRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float LineDisappearingRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float ConversationalDistance;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float HappinessAutoDecreaseRate;
	
	UPROPERTY()
		AMainCharacter* MainCharacter;

	UPROPERTY()
		UWidgetComponent* MainBubble;
	
	UPROPERTY()
		UMainCharacterAnimInstance*  MainCharacterAnimInstance;

	UPROPERTY()
		UMainCharacterAnimInstance*  NPCAnimInstance;
	
	UPROPERTY()
		UTaskRequestFrame* TaskRequestFrameInstance;

	UPROPERTY()
		UTaskCompletedFrame* TaskCompletedFrameInstance;

	UPROPERTY()
		TArray<AActor*> Actors;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UNiagaraComponent* LineEffect;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UWidgetComponent* Bubble;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UWidgetComponent* SimpleName;
	
	UPROPERTY()
		TSubclassOf<class UTaskRequestFrame> TaskFrameUI;

	UPROPERTY()
		TSubclassOf<class UTaskCompletedFrame> TaskCompletedFrameUI;
	
		bool DoOnce;

		TArray<FTaskProperty*> TaskArray;
	
		FTimerHandle TimerHandle_1;

		FTimerHandle TimerHandle_2;

		FTimerHandle TimerHandle_3;

		FTimerHandle TimerHandle_4;

		FTimerHandle TimerHandle_5;

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

	virtual void NotifyActorEndCursorOver() override;
	
	UFUNCTION()
		void UpdateState();

	UFUNCTION()
		void IncreaseHappiness();

	UFUNCTION()
		void AutoDecreaseHappiness();

	UFUNCTION()
		void DestroyNiagaraComponent(UNiagaraComponent* NiagaraComponent);

	UFUNCTION(BlueprintCallable)
		void SetLineEffect();

	UFUNCTION()
		void IsMoving();

	UFUNCTION()
		void ShowTaskRequestFrameBP();

	UFUNCTION()
		void ShowTaskCompletedFrameBP();

	UFUNCTION()
		void InitBubbleBlueprint();

	UFUNCTION()
		void InitSimpleNameBlueprint();

		bool IsTaskInList(int32& Index);
	
	UFUNCTION()
		void PrintLog(FString String);

};
