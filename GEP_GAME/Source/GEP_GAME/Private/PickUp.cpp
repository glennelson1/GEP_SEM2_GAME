// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUp.h"
#include "GameFramework/Character.h"


// Sets default values
APickUp::APickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_PickUpRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PICKUPROOT"));
	RootComponent = m_PickUpRoot;
	
	m_MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	m_MyMesh->AttachToComponent(m_PickUpRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);


	

}



// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void APickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}


void APickUp::OnPlayerEnterPickUp(UPrimitiveComponent* overlappedComp, AActor* otherActor,UPrimitiveComponent* otherComp, int32 otherbodyIndex, bool m_fromsweep, const FHitResult& sweepResult)
{
	Destroy();
}
