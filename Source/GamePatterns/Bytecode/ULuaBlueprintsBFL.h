// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "lua.hpp"
#include "ULuaBlueprintsBFL.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPATTERNS_API UULuaBlueprintsBFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Lua")
	static void RunLua(const FString& code);
};
