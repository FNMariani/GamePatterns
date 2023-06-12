// Fill out your copyright notice in the Description page of Project Settings.


#include "SingletonActor.h"

#include "SingletonGameInstanceSubsystem.h"

ASingletonActor::ASingletonActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ASingletonActor::BeginPlay()
{
	Super::BeginPlay();

	UGameInstance* GameInstance = GetGameInstance();
	if(GameInstance)
	{
		SingletonGameInstanceSubsystem = GameInstance->GetSubsystem<USingletonGameInstanceSubsystem>();
		SingletonGameInstanceSubsystem->IncrementResourceStat();
	}
}

void ASingletonActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

