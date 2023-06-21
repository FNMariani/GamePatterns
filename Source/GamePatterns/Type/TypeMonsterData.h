// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TypeMonsterData.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPATTERNS_API UTypeMonsterData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MonsterData")
	int Health;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MonsterData")
	FString Attack;

public:
	UFUNCTION()
	int GetHealth() { return  Health; }

	UFUNCTION()
	FString GetAttack() { return Attack; }
};
