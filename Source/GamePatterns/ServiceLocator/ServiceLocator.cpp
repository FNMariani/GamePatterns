// Fill out your copyright notice in the Description page of Project Settings.


#include "ServiceLocator.h"

UServiceLocator* UServiceLocator::Instance;

UServiceLocatorAudio* UServiceLocator::AudioService_;

UServiceLocator::UServiceLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	UServiceLocator::Instance = this;
}
