// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUp.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APickUp::APickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Mesh"));
	MyMesh->SetSimulatePhysics(true);
	RootComponent = MyMesh;

	mHolding = false;
	mGravity = false;

}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();
	MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	PlayerCamera = MyCharacter->FindComponentByClass<UCameraComponent>();

	TArray<USceneComponent*> Components;
 
	MyCharacter->GetComponents(Components);

	if(Components.Num() > 0)
	{
		for (auto& Comp : Components)
		{
			if(Comp->GetName() == "HoldingComponent")
			{
				HoldingComp = Cast<USceneComponent>(Comp);
			}
		}
	}
	
}

// Called every frame
void APickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(mHolding && HoldingComp)
	{
		SetActorLocationAndRotation(HoldingComp->GetComponentLocation(), HoldingComp->GetComponentRotation());
	}

}

void APickUp::RotateActor()
{
	ControlRotation = GetWorld()->GetFirstPlayerController()->GetControlRotation();
	SetActorRotation(FQuat(ControlRotation));
}

void APickUp::Pickup()
{
	mHolding = !mHolding;	
	mGravity = !mGravity;
	MyMesh->SetEnableGravity(mGravity);
	MyMesh->SetSimulatePhysics(mHolding ? false : true);
	MyMesh->SetCollisionEnabled(mHolding ? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryAndPhysics);

	if(!mHolding) 
	{
		ForwardVector = PlayerCamera->GetForwardVector();
		MyMesh->AddForce(ForwardVector*100000*MyMesh->GetMass());
	}
}

