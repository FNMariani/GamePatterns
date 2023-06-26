// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ServiceLocatorGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPATTERNS_API UServiceLocatorGameInstance : public UGameInstance
{
	GENERATED_BODY()

	virtual void Init() override;

private: //Holds the ServiceLocator in memory for the duration of the game using UPROPERTY
	UPROPERTY()
	class UServiceLocator* ServiceLocator;
};
