// Fill out your copyright notice in the Description page of Project Settings.


#include "ServiceLocatorAudio.h"

void UServiceLocatorAudio::PlaySound(int soundID)
{
	UE_LOG(LogTemp, Log, TEXT("UServiceLocatorAudio::PlaySound(): SoundID: %d"), soundID);
}

void UServiceLocatorAudio::StopSound(int soundID)
{
	UE_LOG(LogTemp, Log, TEXT("UServiceLocatorAudio::StopSound(): SoundID: %d"), soundID);
}

void UServiceLocatorAudio::StopAllSounds()
{
	UE_LOG(LogTemp, Log, TEXT("UServiceLocatorAudio::StopAllSounds()"));
}
