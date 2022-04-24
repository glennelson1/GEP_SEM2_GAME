// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "PickUp.generated.h"



UCLASS()
class GEP_GAME_API APickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUp();

	virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere)
	USceneComponent* m_PickUpRoot;

	
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* m_MyMesh;

	UPROPERTY(EditAnywhere)
	UShapeComponent* m_PickUpBox;

	UFUNCTION()
	void OnPlayerEnterPickUp(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherbodyIndex, bool m_fromsweep, const FHitResult& sweepResult);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	

};
