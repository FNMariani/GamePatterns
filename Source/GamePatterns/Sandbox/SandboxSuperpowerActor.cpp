// Fill out your copyright notice in the Description page of Project Settings.


#include "SandboxSuperpowerActor.h"

ASandboxSuperpowerActor::ASandboxSuperpowerActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ASandboxSuperpowerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASandboxSuperpowerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASandboxSuperpowerActor::Activate()
{
	UE_LOG(LogTemp, Log, TEXT("ASandboxSuperpowerActor::Activate()"));
}

void ASandboxSuperpowerActor::Move(double x, double y, double z)
{
	UE_LOG(LogTemp, Log, TEXT("ASandboxSuperpowerActor::Move()"));
}

void ASandboxSuperpowerActor::PlaySound(FString sound, double volume)
{
	UE_LOG(LogTemp, Log, TEXT("ASandboxSuperpowerActor::PlaySound()"));
}

void ASandboxSuperpowerActor::SpawnParticles(FString type, int count)
{
	UE_LOG(LogTemp, Log, TEXT("ASandboxSuperpowerActor::SpawnParticles()"));
}

