// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "PickUpAction.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "FPSCharacter.generated.h"

UCLASS()
class GEP_GAME_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

UPROPERTY(EditAnywhere)
	class USceneComponent* HoldingComponent;
	
public:
	// Sets default values for this character's properties
	AFPSCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera")
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera")
	UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Holdingloc")
	USceneComponent* Holdingloc;
	
	void MoveForward(float Value);
	void MoveRight(float Value);

	UPROPERTY(EditAnywhere)
	class APickUpAction* CurrentItem;

	bool m_CanMove;
	bool m_HoldingItem;
	bool m_Inspecting;

	float m_PitchMax;
	float m_PitchMin;

	FVector m_HoldingComp;
	FRotator m_LastRotation;

	FVector m_Start;
	FVector m_forwardVector;
	FVector m_End;

	FHitResult m_Hit;

	FComponentQueryParams DefaultComponentQueryParams;
	FCollisionResponseParams DefaultResponseParams;

	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void OnAction();

	void OnInspect();
	void OnInspectRelease();

	void ToggleMovement();
	void ToggleItemPickUp();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	
};
