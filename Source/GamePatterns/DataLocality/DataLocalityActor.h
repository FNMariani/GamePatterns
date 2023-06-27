// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/Actor.h"
#include "DataLocalityActor.generated.h"

USTRUCT(BlueprintType)
struct FPlantDataRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere)
	FText DisplayName;

	UPROPERTY(EditAnywhere)
	float FlowerRadius = 0.5f;
	
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere)
	TArray<FDataTableRowHandle> ChildPlants;
};

UCLASS()
class GAMEPATTERNS_API ADataLocalityActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADataLocalityActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FPlantDataRow* PlantsDataTable;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
