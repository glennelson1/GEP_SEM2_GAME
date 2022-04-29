// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUp.h"

#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"


// Sets default values
APickUp::APickUp()
{
	m_Collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	RootComponent = m_Collider;


	

}



// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();
	
	
}

void APickUp::BroadCastOnCollected()
{
	OnCollected.Broadcast(this);
	Destroy();
}


