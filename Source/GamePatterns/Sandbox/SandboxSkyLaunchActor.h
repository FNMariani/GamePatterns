// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SandboxSuperpowerActor.h"
#include "GameFramework/Actor.h"
#include "SandboxSkyLaunchActor.generated.h"

UCLASS()
class GAMEPATTERNS_API ASandboxSkyLaunchActor : public ASandboxSuperpowerActor
{
	GENERATED_BODY()
	
public:
	ASandboxSkyLaunchActor();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	
protected:
	UFUNCTION(BlueprintCallable)
	virtual void Activate() override;
};
