// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectablePickUp.h"

#include "Components/SphereComponent.h"

// Sets default values
ACollectablePickUp::ACollectablePickUp()
{
 	m_Collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	RootComponent = m_Collider;

}

// Called when the game starts or when spawned
void ACollectablePickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACollectablePickUp::BroadCastOnCollected()
{
	//OnCollected.Broadcast(this);
	Destroy();
}



