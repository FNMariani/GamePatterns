// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ServiceLocatorActor.generated.h"

UCLASS()
class GAMEPATTERNS_API AServiceLocatorActor : public AActor
{
	GENERATED_BODY()
	
public:
	AServiceLocatorActor();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

};
