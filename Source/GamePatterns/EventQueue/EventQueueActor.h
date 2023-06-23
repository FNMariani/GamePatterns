// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventQueueActor.generated.h"

//Static Delegate
DECLARE_DELEGATE(FStaticDelegate);

class FFireHandler
{
public:
	void OnFire();
};

//Multicast Delegate
DECLARE_MULTICAST_DELEGATE(FStaticMulticastDelegate);

class FFireHandlerMulticast
{
public:
	void OnFire();
};

//Dynamic Delegate
DECLARE_DYNAMIC_DELEGATE(FDynamicDelegate);

//Dynamic Multicast Delegate
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDynamicMulticastDelegate);

UCLASS()
class GAMEPATTERNS_API AEventQueueActor : public AActor
{
	GENERATED_BODY()
	
public:
	AEventQueueActor();

protected:
	virtual void BeginPlay() override;

protected:
	//Static Delegate
	FFireHandler* FireHandler;
	FStaticDelegate OnFireDelegate;

	//Multicast Delegate
	FFireHandlerMulticast* FireHandlerMulticast;
	FFireHandlerMulticast* FireHandlerMulticast2;
	FStaticMulticastDelegate OnFireMulticastDelegate;

	//Dynamic Delegate
	FDynamicDelegate OnFireDynamicDelegate;

	UFUNCTION()
	void OnFireHandler();

	//Dynamic Multicast Delegate
	UPROPERTY(BlueprintAssignable);
	FDynamicMulticastDelegate OnFireDynamicMulticastDelegate;

	UFUNCTION()
	void OnFireDynamicMulticastHandler();
};
