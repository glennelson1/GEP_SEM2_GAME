// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "PickUp.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FColloectedSignature, class APickUp*, delegateInstigator);

class USphereComponent;

UCLASS(Abstract)
class GEP_GAME_API APickUp : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USphereComponent* m_Collider;
	
public:	
	// Sets default values for this actor's properties
	APickUp();

	UPROPERTY(BlueprintAssignable)
	FColloectedSignature OnCollected;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void BroadCastOnCollected();
	
	

};
