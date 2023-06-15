// Fill out your copyright notice in the Description page of Project Settings.


#include "UpdateActor.h"

AUpdateActor::AUpdateActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AUpdateActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AUpdateActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (PatrollingLeft)
	{
		FVector ActorLocation = GetActorLocation();
		FVector NewLocation = FVector(ActorLocation.X - 1, ActorLocation.Y, ActorLocation.Z);
		SetActorLocation(NewLocation);
		if (NewLocation.X == 0) PatrollingLeft = false;
	}
	else
	{
		FVector ActorLocation = GetActorLocation();
		FVector NewLocation = FVector(ActorLocation.X + 1, ActorLocation.Y, ActorLocation.Z);
		SetActorLocation(NewLocation);
		if (NewLocation.X == 100) PatrollingLeft = true;
	}
}

