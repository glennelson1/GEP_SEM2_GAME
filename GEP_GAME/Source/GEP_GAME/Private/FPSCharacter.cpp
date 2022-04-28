// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"
#include "DrawDebugHelpers.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.f;

	// CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	// CameraBoom->SetupAttachment(RootComponent);
	//
	// CameraBoom->TargetArmLength = 300.f;
	// CameraBoom->bUsePawnControlRotation = true;
	//
	//FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	//FollowCamera->SetupAttachment();
	
	
	//FollowCamera->bUsePawnControlRotation = true;

	// headloc = TEXT("head")
	Holdingloc = CreateDefaultSubobject<USceneComponent>(TEXT("Holding loc"));
	
	Holdingloc->SetRelativeLocation(FVector(20.f, 0.f, 60.f));
	Holdingloc->SetupAttachment(RootComponent);
	
	
	
	HoldingComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HoldingComponent"));
	HoldingComponent->SetRelativeLocation(FVector(50.f, 0.f, 0.f));
	HoldingComponent->SetupAttachment(RootComponent);

	CurrentItem =NULL;
	m_CanMove = true;
	m_Inspecting = false;
	
}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();


	m_PitchMax = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMax;
	m_PitchMin = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMin;
}



// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	m_Start = Holdingloc->GetComponentLocation();
	m_forwardVector = Holdingloc->GetForwardVector();
	m_End = ((m_forwardVector * 200.0f) + m_Start);

	DrawDebugLine(GetWorld(), m_Start, m_End, FColor::Green, false, 1,0,1);

	if(!m_HoldingItem)
	{
		if(GetWorld()->LineTraceSingleByChannel(m_Hit, m_Start, m_End, ECC_Visibility, DefaultComponentQueryParams, DefaultResponseParams))
		{
			if(m_Hit.GetActor()->GetClass()->IsChildOf(APickUpAction::StaticClass()))
			{
				CurrentItem = Cast<APickUpAction>(m_Hit.GetActor());
			}
		}
		else
		{
			CurrentItem = NULL;
		}
	}
	

	if(m_Inspecting)
	{
		if(m_HoldingItem)
		{
			HoldingComponent->SetRelativeLocation(FVector(0.f, 50.f, 50.f));
		}
	}
	else
	{
		if(m_HoldingItem)
		{
			HoldingComponent->SetRelativeLocation(FVector(50.0f, 0.f, 0.f));
		}
	}
	
}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

	PlayerInputComponent->BindAction("Action", IE_Pressed, this, &AFPSCharacter::OnAction);

}

void AFPSCharacter::MoveForward(float Value)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0, Rotation.Yaw, 0.f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void AFPSCharacter::MoveRight(float Value)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0, Rotation.Yaw, 0.f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}


void AFPSCharacter::OnAction()
{
	if(CurrentItem)
	{
		ToggleItemPickUp();
	}
}

void AFPSCharacter::OnInspect()
{
}

void AFPSCharacter::OnInspectRelease()
{
}

void AFPSCharacter::ToggleMovement()
{
}

void AFPSCharacter::ToggleItemPickUp()
{
	if(CurrentItem)
	{
		m_HoldingItem = !m_HoldingItem;
		CurrentItem->PickUp();

		if(!m_HoldingItem)
		{
			CurrentItem = NULL;
		}
	}
}
