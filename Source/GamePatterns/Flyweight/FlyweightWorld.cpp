// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyweightWorld.h"
#include "FlyweightTerrainData.h"

AFlyweightWorld::AFlyweightWorld()
{
	PrimaryActorTick.bCanEverTick = true;
	
}

void AFlyweightWorld::GenerateTerrain()
{
	UE_LOG(LogTemp, Log, TEXT("GenerateTerrain"));
	
	// Fill the ground with grass.
	for (int x = 0; x < TerrainWidth; x++)
	{
		for (int y = 0; y < TerrainHeight; y++)
		{
			// Sprinkle some hills.
			if (FMath::RandRange(0, 10)  == 0)
			{
				tiles_[x][y] = Cast<UFlyweightTerrainData>(HillTerrain);
				UE_LOG(LogTemp, Log, TEXT("Tile[%i][%i]: HillTerrain"), x,y);
			}
			else
			{
				tiles_[x][y] = Cast<UFlyweightTerrainData>(GrassTerrain);
				UE_LOG(LogTemp, Log, TEXT("Tile[%i][%i]: GrassTerrain"), x,y);
			}
		}
	}

	// Lay a river.
	int x = FMath::RandRange(0, TerrainWidth);
	for (int y = 0; y < TerrainHeight; y++)
	{
		tiles_[x][y] = Cast<UFlyweightTerrainData>(RiverTerrain);
		UE_LOG(LogTemp, Log, TEXT("Tile[%i][%i]: RiverTerrain"), x,y);
	}
}

void AFlyweightWorld::BeginPlay()
{
	Super::BeginPlay();

	GenerateTerrain();
}

