// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

UCLASS()
class SOCIAL_DISTANCE_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();
	
	UPROPERTY(BlueprintReadOnly)
		float Loneliness;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float InitLoneliness;

	UPROPERTY(BlueprintReadOnly)
		float Risk;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float InitRisk;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float LonelinessDeclineRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float RiskIncreaseRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharacterProperty)
		float RiskRangeValue;
	
	UPROPERTY(BlueprintReadOnly)
		TArray<float> DistanceList;

	UPROPERTY(BlueprintReadOnly)
		FVector SelfLocation;

	UPROPERTY()
		TArray<AActor*> InteractableNPCList;

	UPROPERTY()
		TArray<AActor*> MovableNPCList;
	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;
	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;
	
	FTimerHandle TimerHandle_1;

	FTimerHandle TimerHandle_2;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	UFUNCTION()
		void UpdateState();
	
	UFUNCTION()
		void PrintLog(FString String);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	
};

