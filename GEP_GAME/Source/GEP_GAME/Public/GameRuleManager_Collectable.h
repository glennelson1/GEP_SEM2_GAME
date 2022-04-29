// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CollectablePickUp.h"
#include "GameRuleManager.h"
#include "GameRuleManager_Collectable.generated.h"

/**
 * 
 */
UCLASS()
class GEP_GAME_API AGameRuleManager_Collectable : public AGameRuleManager
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<ACollectablePickUp*> m_Collectables;

	int m_AmountRemaining;

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Collected(ACollectablePickUp* delegateInstigator);
	virtual void Collected_Implementation(ACollectablePickUp* delegateInstigator);
	
};
