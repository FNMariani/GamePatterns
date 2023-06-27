// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataLocalityDataAsset.generated.h"

UCLASS(CollapseCategories)
class UPlantFlowerData : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	float Radius = 0.5f;
	
	UPROPERTY(EditAnywhere)
	int32 Count = 5;
};

/**
 * 
 */
UCLASS(BlueprintType)
class GAMEPATTERNS_API UDataLocalityDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FText DisplayName;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> Icon;

	// Showing how to do an inlined UObject instance for completeness
	UPROPERTY(EditAnywhere, Instanced)
	TArray<UPlantFlowerData*> FlowerDatas;

	// Point to other Data Assets
	// Instead of raw pointer could also be TObjectPtr<T> or TAssetPtr<T>
	UPROPERTY(EditAnywhere)	
	TArray<UDataLocalityDataAsset*> ChildPlants;
};
