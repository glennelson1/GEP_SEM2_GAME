// Fill out your copyright notice in the Description page of Project Settings.


#include "HeathComponent.h"

// Sets default values for this component's properties
UHeathComponent::UHeathComponent()
{
	
	PrimaryComponentTick.bCanEverTick = true;

	m_MaxHealth = 100.f;
	
}


// Called when the game starts
void UHeathComponent::BeginPlay()
{
	Super::BeginPlay();

	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHeathComponent::DamgeTaken);
	m_CurrentHealth = m_MaxHealth;
	
	
}
void UHeathComponent::DamgeTaken(AActor* damagedAcator, float damage, const UDamageType* damageType, AController* instigator, AActor* causer)
{
	
	if(m_CurrentHealth <= 0.f){onComponentDead.Broadcast(instigator);}
}

// Called every frame
void UHeathComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

