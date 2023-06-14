// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameLoopGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPATTERNS_API AGameLoopGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "GameLoopInfo")
	float GetAverageFPS();
};
