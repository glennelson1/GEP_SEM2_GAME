// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HeathComponent.generated.h"
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentDeadSignature, AController*, causer);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GEP_GAME_API UHeathComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHeathComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintAssignable, Category= "Component")
	FComponentDeadSignature onComponentDead;

	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Health");
	float m_CurrentHealth;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Health");
	float m_MaxHealth;

	

	UFUNCTION()
	void DamgeTaken(AActor* damagedAcator, float damage, const UDamageType* damageType, AController* m_instigator, AActor* causer);
		
};
