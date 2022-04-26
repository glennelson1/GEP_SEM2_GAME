// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorComponent_Health.h"

// Sets default values for this component's properties
UMyActorComponent_Health::UMyActorComponent_Health()
{
	
	PrimaryComponentTick.bCanEverTick = true;

	m_Health = m_DefaultHealth;
}



void UMyActorComponent_Health::BeginPlay()
{
	Super::BeginPlay();

	
	
}


// Called every frame
void UMyActorComponent_Health::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float UMyActorComponent_Health::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent,
	AController* EventInstigator, AActor* DamageCauser)
{
	m_Health -= DamageAmount;
	UE_LOG(LogTemp, Warning, TEXT("Health: %f"), m_Health);

	if(m_Health <= 0 )
	{
		UE_LOG(LogTemp, Warning, TEXT("Healt depleted"));
	}

	return DamageAmount;
}

