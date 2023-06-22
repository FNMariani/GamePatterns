// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponentActor.h"

AComponentActor::AComponentActor()
{
	PrimaryActorTick.bCanEverTick = true;
	
}

void AComponentActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AComponentActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}