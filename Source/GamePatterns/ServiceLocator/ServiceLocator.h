// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ServiceLocator.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPATTERNS_API UServiceLocator : public UObject
{
	GENERATED_BODY()
	
public:
	UServiceLocator(const FObjectInitializer& ObjectInitializer);

	static class UServiceLocatorAudio* GetAudio() { return AudioService_; }

	static void ProvideAudio(UServiceLocatorAudio* service) { AudioService_ = service; Instance->AudioService = service; }

private:
	static UServiceLocator* Instance;	// Static References

	static UServiceLocatorAudio* AudioService_;	// UE UProperty references in the instance, used to maintain memory management and are otherwise unused.

	UPROPERTY()
	UServiceLocatorAudio* AudioService;

};