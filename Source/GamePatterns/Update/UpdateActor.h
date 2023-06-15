// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UpdateActor.generated.h"

UCLASS()
class GAMEPATTERNS_API AUpdateActor : public AActor
{
	GENERATED_BODY()
	
public:
	AUpdateActor();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	bool PatrollingLeft;
};
