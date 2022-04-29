// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameRuleManager.h"
#include "GameFramework/GameMode.h"
#include "GameFramework/GameModeBase.h"
#include "GEP_GAMEGameModeBase.generated.h"


UCLASS()
class GEP_GAME_API AGEP_GAMEGameModeBase : public AGameMode
{
	GENERATED_BODY()

protected:
	int m_GameRulesLeft;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MatchManagement")
	TMap<AGameRuleManager*, bool> m_GameRuleManagers;

	UFUNCTION()
	void HandleGameRuleSuccess(AGameRuleManager* delegateInstigator);

	virtual void BeginPlay() override;


	
};
