// Fill out your copyright notice in the Description page of Project Settings.


#include "PrototypeBFL.h"

AActor* UPrototypeBFL::CloneActor(AActor* InputActor)
{
	UE_LOG(LogTemp, Log, TEXT("CloneActor()"));
	
	UWorld * World = InputActor->GetWorld();
	FActorSpawnParameters params;
	params.Template = InputActor;

	UClass * ItemClass = InputActor->GetClass();
	AActor* const SpawnedActor = World->SpawnActor<AActor>(ItemClass, params);
	
	return SpawnedActor;
}