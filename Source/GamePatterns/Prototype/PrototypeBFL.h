// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PrototypeBFL.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPATTERNS_API UPrototypeBFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "PrototypeFuncions", meta = (DeterminesOutputType = "InputActor"))
	static AActor* CloneActor(AActor* InputActor);
};
