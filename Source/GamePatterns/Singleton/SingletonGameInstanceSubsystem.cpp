// Fill out your copyright notice in the Description page of Project Settings.


#include "SingletonGameInstanceSubsystem.h"

void USingletonGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UE_LOG(LogTemp, Log, TEXT("USingletonGameInstanceSubsystem::Initialize()"));
}

void USingletonGameInstanceSubsystem::Deinitialize()
{
	Super::Deinitialize();

	UE_LOG(LogTemp, Log, TEXT("USingletonGameInstanceSubsystem::Deinitialize()"));
}

void USingletonGameInstanceSubsystem::IncrementResourceStat()
{
	UE_LOG(LogTemp, Log, TEXT("USingletonGameInstanceSubsystem::IncrementResourceStat()"));
}
