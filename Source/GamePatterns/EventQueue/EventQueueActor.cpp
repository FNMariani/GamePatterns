// Fill out your copyright notice in the Description page of Project Settings.


#include "EventQueueActor.h"

AEventQueueActor::AEventQueueActor()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AEventQueueActor::BeginPlay()
{
	Super::BeginPlay();

	//Static Delegate
	FireHandler = new FFireHandler();
	OnFireDelegate.BindRaw(FireHandler, &FFireHandler::OnFire);
	
	OnFireDelegate.ExecuteIfBound();

	
	//Multicast Delegate
	FireHandlerMulticast = new FFireHandlerMulticast();
	FireHandlerMulticast2 = new FFireHandlerMulticast();
	OnFireMulticastDelegate.AddRaw(FireHandlerMulticast, &FFireHandlerMulticast::OnFire);
	OnFireMulticastDelegate.AddRaw(FireHandlerMulticast2, &FFireHandlerMulticast::OnFire);
	
	OnFireMulticastDelegate.Broadcast();

	
	//Dynamic Delegate
	OnFireDynamicDelegate.BindDynamic(this, &AEventQueueActor::OnFireHandler);
	
	OnFireDynamicDelegate.ExecuteIfBound();


	//Dynamic Multicast Delegate
	OnFireDynamicMulticastDelegate.AddDynamic(this, &AEventQueueActor::OnFireDynamicMulticastHandler);
	
	OnFireDynamicMulticastDelegate.Broadcast();
}

void FFireHandler::OnFire()
{
	UE_LOG(LogTemp, Log, TEXT("FFireHandler::OnFire()"));
}

void FFireHandlerMulticast::OnFire()
{
	UE_LOG(LogTemp, Log, TEXT("FFireHandlerMulticast::OnFire()"));
}

//Dynamic Delegate
void AEventQueueActor::OnFireHandler()
{
	UE_LOG(LogTemp, Log, TEXT("AEventQueueActor::OnFireHandler()"));
}

//Dynamic Multicast Delegate
void AEventQueueActor::OnFireDynamicMulticastHandler()
{
	UE_LOG(LogTemp, Log, TEXT("AEventQueueActor::OnFireDynamicMulticastHandler()"));
}
