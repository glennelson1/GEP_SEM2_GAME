// Fill out your copyright notice in the Description page of Project Settings.


#include "Puzzle_Component.h"

// Sets default values
APuzzle_Component::APuzzle_Component()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APuzzle_Component::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APuzzle_Component::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

