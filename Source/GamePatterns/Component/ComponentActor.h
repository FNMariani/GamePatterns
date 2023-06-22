// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ComponentActor.generated.h"

UCLASS()
class GAMEPATTERNS_API AComponentActor : public AActor
{
	GENERATED_BODY()
	
public:
	AComponentActor();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
