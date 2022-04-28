// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraComponent.h"
#include "PickUpAction.generated.h"

UCLASS()
class GEP_GAME_API APickUpAction : public AActor
{
	GENERATED_BODY()
	
public:	
	
	APickUpAction();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere)
	USceneComponent* HoldingComp;

	UFUNCTION()
	void RotateActor();

	UFUNCTION()
	void PickUp();

	bool m_Holding;
	bool m_Gravity;

	FRotator m_ControlRotation;
	ACharacter* MyCharacter;
	UCameraComponent* m_PlayerCamera;
	FVector m_ForwardVector;

};
