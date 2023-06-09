// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObserverActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FObserverDynamicDelegate);

UCLASS()
class GAMEPATTERNS_API AObserverActor : public AActor
{
	GENERATED_BODY()
	
public:
	AObserverActor();

protected:
	UPROPERTY(BlueprintAssignable)
	FObserverDynamicDelegate OnObserverDelegate;
	
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable, Category = "ObserverDelegate")
	void ObserverDoSomething();
};
