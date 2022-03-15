// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC_Movable.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NiagaraFunctionLibrary.h"

// Sets default values
ANPC_Movable::ANPC_Movable()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCharacterMovement()->MaxWalkSpeed = WalkingSpeed;
	// 创建Niagara组件并绑定距离线效果
	LineEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LineEffect"));
	LineEffect->SetupAttachment(RootComponent);
	ConstructorHelpers::FObjectFinder<UNiagaraSystem> NiagaraSystemObj(TEXT("NiagaraSystem'/Game/StarterContent/VFX/NS_Prototype_Line.NS_Prototype_Line'"));
	if(NiagaraSystemObj.Succeeded())
	{
		LineEffect->SetAsset(NiagaraSystemObj.Object);
	}else
	{
		PrintLog("Can not find NiagaraSystemObj");
	}
}

// Called when the game starts or when spawned
void ANPC_Movable::BeginPlay()
{
	Super::BeginPlay();
	MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AMainCharacter::StaticClass()));
	LineEffect->SetRenderCustomDepth(true);
}

// Called every frame
void ANPC_Movable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SelfLocation = GetActorLocation();
	SetLineEffect();
}

// Called to bind functionality to input
void ANPC_Movable::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANPC_Movable::SetLineEffect()
{
	if(MainCharacter)
	{
		if(GetDistanceTo(MainCharacter) < LineDisappearingRange)
		{
			LineEffect->SetVisibility(true);
			FVector NPCPosition(SelfLocation.X, SelfLocation.Y, SelfLocation.Z - 80);
			FVector MCPosition(MainCharacter -> SelfLocation.X, MainCharacter -> SelfLocation.Y, MainCharacter -> SelfLocation.Z - 80);
			LineEffect -> SetVectorParameter("NPC_POS", NPCPosition);
			LineEffect -> SetVectorParameter("Player_POS", MCPosition);
		}else
		{
			LineEffect->SetVisibility(false);
		}
	}
}

void ANPC_Movable::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, String);
	}
}




