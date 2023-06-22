// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ComponentActorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAMEPATTERNS_API UComponentActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UComponentActorComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "HealthComponent")
	float Health;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "HealthComponent")
	float HealthMax;

public:
	UFUNCTION(BlueprintCallable, Category = "HealthComponent")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "HealthComponent")
	float GetHealthMax() const;

	UFUNCTION(BlueprintCallable, Category = "HealthComponent")
	void ApplyHealthChange(float Delta);
};
