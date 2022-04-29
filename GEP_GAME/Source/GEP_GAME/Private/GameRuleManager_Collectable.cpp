// Fill out your copyright notice in the Description page of Project Settings.


#include "GameRuleManager_Collectable.h"

#include "EngineUtils.h"

void AGameRuleManager_Collectable::BeginPlay()
{
	if(m_Collectables.Num() == 0)
	{
		for(TActorIterator<ACollectablePickUp> It(GetWorld()); It; ++It)
		{
			m_Collectables.Add(*It);
		}
	}

	for(ACollectablePickUp* coll : m_Collectables)
	{
		//coll->OnCollected.AddDynamic(this, &AGameRuleManager_Collectable::Collected);
	}

	m_AmountRemaining = m_Collectables.Num();
	Super::BeginPlay();
}

void AGameRuleManager_Collectable::Collected_Implementation(ACollectablePickUp* delegateInstigator)
{
	m_AmountRemaining--;
	if(m_AmountRemaining == 0)
	{
		BroadcastGameRuleSuccess();
	}
}






