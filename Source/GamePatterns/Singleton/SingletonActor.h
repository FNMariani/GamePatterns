// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SingletonActor.generated.h"

UCLASS()
class GAMEPATTERNS_API ASingletonActor : public AActor
{
	GENERATED_BODY()
	
public:
	ASingletonActor();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "SingletonSubsystem")
	class USingletonGameInstanceSubsystem* SingletonGameInstanceSubsystem;
};
