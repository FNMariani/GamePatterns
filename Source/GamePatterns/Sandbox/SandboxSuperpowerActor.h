// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SandboxSuperpowerActor.generated.h"

UCLASS(ABSTRACT)
class GAMEPATTERNS_API ASandboxSuperpowerActor : public AActor
{
	GENERATED_BODY()
	
public:
	ASandboxSuperpowerActor();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Activate();

	void Move(double x, double y, double z);

	void PlaySound(FString sound, double volume);

	void SpawnParticles(FString type, int count);

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	TObjectPtr<UParticleSystem> VFX;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	TObjectPtr<class USoundCue> Sound;
};
