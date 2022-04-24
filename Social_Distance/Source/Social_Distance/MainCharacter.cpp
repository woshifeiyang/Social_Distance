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
	ConstructorHelpers::FClassFinder<UUserWidget> BubbleClass(TEXT("UserWidget'/Game/UI/WB_NPCName.WB_NPCName_C'"));
	if(BubbleClass.Succeeded())
	{
		Bubble->SetWidgetClass(BubbleClass.Class);
	}else
	{
		PrintLog("Can not find BubbleClass");
	}
	Bubble->SetWidgetSpace(EWidgetSpace::Screen);
	Bubble->SetDrawAtDesiredSize(true);

	ConstructorHelpers::FClassFinder<UInGameInterface> InGameInterfaceBPClass(TEXT("UserWidget'/Game/UI/WB_InGameInterface.WB_InGameInterface_C'"));
	if(InGameInterfaceBPClass.Succeeded())
	{
		InGameInterfaceUI = InGameInterfaceBPClass.Class;
	}
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	Happiness = InitHappiness;
	Risk = InitRisk;
	Bubble->SetVisibility(false);				// 初始化默认气泡不显示
	// 获取所有NPC对象
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANPC_Interactable::StaticClass(), InteractableNPCList);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANPC_Movable::StaticClass(), MovableNPCList);
	// 设定定时器，每隔0.5秒更新一次风险值
	GetWorldTimerManager().SetTimer(TimerHandle_1, this, &AMainCharacter::UpdateState, 0.5f, true);
	// 实例化人物列表UI，并实时更新信息
	InGameInterfaceInstance = Cast<UInGameInterface>(CreateWidget(GetWorld(), InGameInterfaceUI));
	InGameInterfaceInstance->AddToViewport();
	InitRickTextArray();
	GetWorldTimerManager().SetTimer(TimerHandle_3, this, &AMainCharacter::ShowTaskList, 1.0f, true);
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

// 定时刷新任务列表信息，固定最多只能显示三条任务内容
void AMainCharacter::ShowTaskList()
{
	const FString ContentFormat_1 = "<BodyText>- ";
	const FString TipFormat_1 = " <BodyText>- ";
	const FString TipDeletedFormat_1 = " <DeletedText>- ";
	const FString Format_2 = "</>";
	FString TaskContent;	
	FString TaskTip_1;
	FString TaskTip_2;
	if(TaskList.Num() == 0)
	{
		InGameInterfaceInstance->TaskListContent_1->SetText(FText::FromString(""));
		InGameInterfaceInstance->TaskListContent_2->SetText(FText::FromString(""));
		InGameInterfaceInstance->TaskListContent_3->SetText(FText::FromString(""));
		InGameInterfaceInstance->TaskListTips_1_1->SetText(FText::FromString(""));
		InGameInterfaceInstance->TaskListTips_1_2->SetText(FText::FromString(""));
		InGameInterfaceInstance->TaskListTips_2_1->SetText(FText::FromString(""));
		InGameInterfaceInstance->TaskListTips_2_2->SetText(FText::FromString(""));
		InGameInterfaceInstance->TaskListTips_3_1->SetText(FText::FromString(""));
		InGameInterfaceInstance->TaskListTips_3_2->SetText(FText::FromString(""));
	}
	else
	{
		TArray<int> KeysArray;
		TaskList.GetKeys(KeysArray);
		for(int32 i = 0, Count = 0; Count < RichTextArray.Num(); Count += 3, i++)
		{
			if(i < TaskList.Num())
			{
				GetInfoFromDataTable(KeysArray[i], TaskContent, TaskTip_1, TaskTip_2);
				RichTextArray[Count]->SetText(FText::FromString(ContentFormat_1 + TaskContent + Format_2));
				if(TaskList[KeysArray[i]] == 1)
				{
					RichTextArray[Count + 1]->SetText(FText::FromString(TipFormat_1 + TaskTip_1 + Format_2));
				}
				else if(TaskList[KeysArray[i]] == 2)
				{
					RichTextArray[Count + 1]->SetText(FText::FromString(TipDeletedFormat_1 + TaskTip_1 + Format_2));
				}
				RichTextArray[Count + 2]->SetText(FText::FromString(TipFormat_1 + TaskTip_2 + Format_2));
			}
			else
			{
				RichTextArray[Count]->SetText(FText::FromString(""));
				RichTextArray[Count + 1]->SetText(FText::FromString(""));
				RichTextArray[Count + 2]->SetText(FText::FromString(""));
			}
		}
	}
}

void AMainCharacter::InitRickTextArray()
{
	RichTextArray.Add(InGameInterfaceInstance->TaskListContent_1);
	RichTextArray.Add(InGameInterfaceInstance->TaskListTips_1_1);
	RichTextArray.Add(InGameInterfaceInstance->TaskListTips_1_2);
	RichTextArray.Add(InGameInterfaceInstance->TaskListContent_2);
	RichTextArray.Add(InGameInterfaceInstance->TaskListTips_2_1);
	RichTextArray.Add(InGameInterfaceInstance->TaskListTips_2_2);
	RichTextArray.Add(InGameInterfaceInstance->TaskListContent_3);
	RichTextArray.Add(InGameInterfaceInstance->TaskListTips_3_1);
	RichTextArray.Add(InGameInterfaceInstance->TaskListTips_3_2);
}
// 从数据表中根据TaskIndex提取TaskContent, TaskTips
void AMainCharacter::GetInfoFromDataTable(int32 Index, FString& TaskContent, FString& TaskTip_1, FString& TaskTip_2)
{
	FString ContextString;
	if(TaskPropertyDataTable != nullptr)
	{
		TArray<FName> RowNames = TaskPropertyDataTable->GetRowNames();
		for(auto& name : RowNames)
		{
			FTaskProperty* Row = TaskPropertyDataTable->FindRow<FTaskProperty>(name, ContextString);
			if(Row != nullptr && Row->TaskIndex == Index)
			{
				TaskContent = Row->TaskContent;
				TaskTip_1 = Row->TaskTip_1;
				TaskTip_2 = Row->TaskTip_2;
			}
		}
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



