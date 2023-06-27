// Fill out your copyright notice in the Description page of Project Settings.


#include "DataLocalityActor.h"

// Sets default values
ADataLocalityActor::ADataLocalityActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADataLocalityActor::BeginPlay()
{
	Super::BeginPlay();
	
	/*FName RowName = "sunflower";
	FString ContextString = "Searching for sunflowers...?";
	FPlantDataRow* Row = PlantsDataTable->FindRow<FPlantDataRow>(RowName, ContextString);
	if (Row)
	{
		// Do something with row data
	}

	TArray<FName> RowNames = PlantsDataTable->GetRowNames();
	for (const FName& RowName : RowNames)
	{
	}*/
}

// Called every frame
void ADataLocalityActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

