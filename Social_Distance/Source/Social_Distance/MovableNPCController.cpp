// Fill out your copyright notice in the Description page of Project Settings.


#include "MovableNPCController.h"
#include <concrt.h>
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"

void AMovableNPCController::BeginPlay()
{
	Super::BeginPlay();
	// 获取控制器绑定的character
	MyCharacter = Cast<ANPC_Movable>(this -> GetCharacter());
	// 设置角色行走速度
	MovementComponent = MyCharacter -> GetCharacterMovement();
	MovementComponent -> MaxWalkSpeed = MyCharacter -> WalkingSpeed;
	
	Index = 0;
	WalkingInPath();
}
// 当运动完成时，等待一段时间并寻找下一个目标点
void AMovableNPCController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);
	Index++;
	if(Index == MyCharacter -> Waypoints.Num())
	{
		Index = 0;
	}
	GetWorldTimerManager().SetTimer(TimerHandle, this, &AMovableNPCController::WalkingInPath, MyCharacter -> WaitTime, false);
}
// 移动到目标点
void AMovableNPCController::WalkingInPath()
{
	FVector Vector = MyCharacter -> Waypoints[Index] -> GetActorLocation();
	MoveToLocation(Vector);
}

void AMovableNPCController::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, String);
	}
}


