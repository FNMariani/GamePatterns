// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponentActorComponent.h"

UComponentActorComponent::UComponentActorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	HealthMax = 100;
	Health = HealthMax;
}

void UComponentActorComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UComponentActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
}

float UComponentActorComponent::GetHealth() const
{
	return Health;
}

float UComponentActorComponent::GetHealthMax() const
{
	return HealthMax;
}

void UComponentActorComponent::ApplyHealthChange(float Delta)
{
	float NewHealth = FMath::Clamp(Health + Delta, 0.0f, HealthMax);

	Health = NewHealth;

	UE_LOG(LogTemp, Log, TEXT("New health: %f"), Health);

	if (Health == 0.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Player Die!"));
	}
}