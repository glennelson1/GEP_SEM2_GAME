// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameRuleManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameRuleSuccessSignature, class AGameRuleManager*, delegateInstigator);

UCLASS(Abstract)
class GEP_GAME_API AGameRuleManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameRuleManager();

	UPROPERTY(BlueprintAssignable)
	FGameRuleSuccessSignature OnGameRuleSuccess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsMatchEndingRules;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void BroadcastGameRuleSuccess();

};
