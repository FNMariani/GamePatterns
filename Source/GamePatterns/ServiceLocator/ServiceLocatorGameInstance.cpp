// Fill out your copyright notice in the Description page of Project Settings.


#include "ServiceLocatorGameInstance.h"
#include "ServiceLocator.h"

void UServiceLocatorGameInstance::Init()
{
	Super::Init();

	//Create an instance of the ServiceLocator and hold it in memory
	ServiceLocator = NewObject<UServiceLocator>(UServiceLocator::StaticClass());
}
