// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ServiceLocatorAudio.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPATTERNS_API UServiceLocatorAudio : public UObject
{
	GENERATED_BODY()

public:
	virtual void PlaySound(int soundID);
	virtual void StopSound(int soundID);
	virtual void StopAllSounds();
};
