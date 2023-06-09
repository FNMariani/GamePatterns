// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FlyweightTerrainData.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPATTERNS_API UFlyweightTerrainData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "TerrainData")
	int MovementCost;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "TerrainData")
	bool bIsWater;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "TerrainData")
	TObjectPtr<UTexture2D> Texture;
};
