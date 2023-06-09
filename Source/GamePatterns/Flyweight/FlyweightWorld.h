// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlyweightWorld.generated.h"

UCLASS()
class GAMEPATTERNS_API AFlyweightWorld : public AActor
{
	GENERATED_BODY()
	
public:
	AFlyweightWorld();
	
	void GenerateTerrain();

	virtual void BeginPlay() override;

protected:

	/*UPROPERTY(EditDefaultsOnly, Category = "Terrain")
	int32 TerrainWidth = 1;
	
	UPROPERTY(EditDefaultsOnly, Category = "Terrain")
	int32 TerrainHeight = 1;*/

	UPROPERTY(EditDefaultsOnly, Category = "Terrain")
	TObjectPtr<class UFlyweightTerrainData> GrassTerrain;

	UPROPERTY(EditDefaultsOnly, Category = "Terrain")
	TObjectPtr<UFlyweightTerrainData> HillTerrain;

	UPROPERTY(EditDefaultsOnly, Category = "Terrain")
	TObjectPtr<UFlyweightTerrainData> RiverTerrain;

private:
	UFlyweightTerrainData* Tiles[10][10];
};
