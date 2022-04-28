// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUpAction.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APickUpAction::APickUpAction()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	MyMesh->SetSimulatePhysics(true);
	RootComponent = MyMesh;

	m_Holding = false;
	m_Gravity = true;
}

// Called when the game starts or when spawned
void APickUpAction::BeginPlay()
{
	Super::BeginPlay();

	MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	m_PlayerCamera = MyCharacter->FindComponentByClass<UCameraComponent>();

	TArray<USceneComponent*> Components;

	MyCharacter->GetComponents(Components);

	if(Components.Num() > 0)
	{
		for(auto& Comp : Components)
		{
			if(Comp->GetName() == "HoldingComponent")
			{
				HoldingComp = Cast<USceneComponent>(Comp);
			}
		}
	}
}

// Called every frame
void APickUpAction::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(m_Holding && HoldingComp)
	{
		SetActorLocationAndRotation(HoldingComp->GetComponentLocation(), HoldingComp->GetComponentRotation());
	}

}

void APickUpAction::RotateActor()
{
	m_ControlRotation = GetWorld()->GetFirstPlayerController()->GetControlRotation();
	SetActorRotation(FQuat(m_ControlRotation));
}

void APickUpAction::PickUp()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Screen Message"));
	m_Holding = !m_Holding;
	m_Gravity = !m_Gravity;
	MyMesh->SetEnableGravity(m_Gravity);
	MyMesh->SetSimulatePhysics(m_Holding ? false : true);
	MyMesh->SetCollisionEnabled(m_Holding ? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryAndPhysics);


	if(!m_Holding)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("yes"));
		m_ForwardVector = m_PlayerCamera->GetForwardVector();
		MyMesh->AddForce(m_ForwardVector* 200000 * MyMesh->GetMass());
	}
}


