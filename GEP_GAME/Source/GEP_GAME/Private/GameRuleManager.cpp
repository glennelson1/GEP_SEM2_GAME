// Fill out your copyright notice in the Description page of Project Settings.


#include "GameRuleManager.h"

// Sets default values
AGameRuleManager::AGameRuleManager()
{
	IsMatchEndingRules = false;
}

// Called when the game starts or when spawned
void AGameRuleManager::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGameRuleManager::BroadcastGameRuleSuccess()
{
	OnGameRuleSuccess.Broadcast(this);
}




