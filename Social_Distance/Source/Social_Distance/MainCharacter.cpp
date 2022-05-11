// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "NPC_Interactable.h"
#include "NPC_Movable.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 1000.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller
	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
	// 创建Widget组件并绑定控件蓝图
	Bubble = CreateDefaultSubobject<UWidgetComponent>(TEXT("Bubble"));
	Bubble->SetupAttachment(GetMesh());
	ConstructorHelpers::FClassFinder<UUserWidget> BubbleClass(TEXT("UserWidget'/Game/UI/WB_MCName.WB_MCName_C'"));
	if(BubbleClass.Succeeded())
	{
		Bubble->SetWidgetClass(BubbleClass.Class);
	}else
	{
		PrintLog("Can not find BubbleClass");
	}
	Bubble->SetWidgetSpace(EWidgetSpace::Screen);
	Bubble->SetDrawAtDesiredSize(true);
	
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	Happiness = InitHappiness;
	Risk = InitRisk;
	Bubble->SetVisibility(false);				// 初始化默认气泡不显示
	Bubble->SetRelativeLocation(FVector(0, 0, 250));
	// 获取所有NPC对象
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANPC_Interactable::StaticClass(), InteractableNPCList);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANPC_Movable::StaticClass(), MovableNPCList);
	// 设定定时器，每隔0.5秒更新一次风险值
	GetWorldTimerManager().SetTimer(TimerHandle_1, this, &AMainCharacter::UpdateState, 0.5f, true);
}


void AMainCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AMainCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
/* 更新风险值, 是否处在与NPC交流状态
 * Risk = Risk + 处在风险圈内NPC的数量 * 风险上升系数
 */
void AMainCharacter::UpdateState()
{
	int32 Count = 0;
	for(AActor* Actor: InteractableNPCList)
	{
		ANPC_Interactable* NPC = Cast<ANPC_Interactable>(Actor);
		if(NPC)
		{
			float Distance = GetDistanceTo(NPC);
			if(Distance <= RiskRangeValue)
			{
				Count++;
			}
		}
	}
	for(AActor* Actor: MovableNPCList)
	{
		ANPC_Movable* NPC = Cast<ANPC_Movable>(Actor);
		if(NPC)
		{
			float Distance = GetDistanceTo(NPC);
			if(Distance <= RiskRangeValue)
			{
				Count++;
			}
		}
	}
	if(Risk + RiskIncreaseRate * Count < 100.0f)
	{
		Risk += RiskIncreaseRate * Count;
	}else
	{
		Risk = 100.0f;
	}
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SelfLocation = GetActorLocation();
}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	

	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);
}

void AMainCharacter::PrintLog(FString String)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, String);
	}
}



