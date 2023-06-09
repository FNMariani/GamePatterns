// Fill out your copyright notice in the Description page of Project Settings.


#include "ObserverActor.h"

AObserverActor::AObserverActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AObserverActor::BeginPlay()
{
	Super::BeginPlay();

	OnObserverDelegate.AddDynamic(this, &AObserverActor::ObserverDoSomething);
	OnObserverDelegate.Broadcast();
}

void AObserverActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObserverActor::ObserverDoSomething()
{
	UE_LOG(LogTemp, Log, TEXT("ObserverDoSomething()"));
}

