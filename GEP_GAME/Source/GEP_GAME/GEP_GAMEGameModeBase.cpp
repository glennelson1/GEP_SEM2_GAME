// Copyright Epic Games, Inc. All Rights Reserved.


#include "GEP_GAMEGameModeBase.h"

#include "EngineUtils.h"

void AGEP_GAMEGameModeBase::HandleGameRuleSuccess(AGameRuleManager* delegateInstigator)
{
	if(m_GameRuleManagers.Find(delegateInstigator))
	{
		
		EndMatch();
	}
	else
	{
		m_GameRulesLeft--;
		if(m_GameRulesLeft == 0)
		{
			EndMatch();
		}
	}
}

void AGEP_GAMEGameModeBase::BeginPlay()
{
	m_GameRulesLeft = 0;
	for (TActorIterator<AGameRuleManager> It(GetWorld()); It; ++It)
	{
		m_GameRuleManagers.Add(*It, It->IsMatchEndingRules);
		It->OnGameRuleSuccess.AddDynamic(this, &AGEP_GAMEGameModeBase::AGEP_GAMEGameModeBase::HandleGameRuleSuccess);
		if(!It->IsMatchEndingRules)
		{
			m_GameRulesLeft++;
		}
	}
}
