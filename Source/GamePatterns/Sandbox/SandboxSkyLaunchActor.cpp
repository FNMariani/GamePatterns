// Fill out your copyright notice in the Description page of Project Settings.


#include "SandboxSkyLaunchActor.h"

ASandboxSkyLaunchActor::ASandboxSkyLaunchActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ASandboxSkyLaunchActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASandboxSkyLaunchActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASandboxSkyLaunchActor::Activate()
{
	UE_LOG(LogTemp, Log, TEXT("ASandboxSkyLaunchActor::Activate()"));
	
	// Spring into the air.
	PlaySound("SOUND_SPROING", 1.0f);
	SpawnParticles("PARTICLE_DUST", 10);
	Move(0, 0, 20);
}
