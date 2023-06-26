// Fill out your copyright notice in the Description page of Project Settings.


#include "ServiceLocatorActor.h"
#include "ServiceLocator.h"
#include "ServiceLocatorAudio.h"

AServiceLocatorActor::AServiceLocatorActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AServiceLocatorActor::BeginPlay()
{
	Super::BeginPlay();

	UServiceLocatorAudio* AudioService = NewObject<UServiceLocatorAudio>(UServiceLocatorAudio::StaticClass());
	UServiceLocator::ProvideAudio(AudioService);

	UServiceLocator::GetAudio();
	UServiceLocator::GetAudio()->PlaySound(128);
}

void AServiceLocatorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

