// Fill out your copyright notice in the Description page of Project Settings.


#include "Action.h"

#include "ActionComponent.h"

void UAction::Initialize(UActionComponent* NewActionComp)
{
	ActionComp = NewActionComp;
}

bool UAction::CanStart_Implementation(AActor* Actor)
{
	if (IsRunning())
	{
		return false;
	}

	return true;
}

void UAction::StartAction_Implementation(AActor* Actor)
{
	UE_LOG(LogTemp, Log, TEXT("Started: %s"), *GetNameSafe(this));
	//LogOnScreen(this, FString::Printf(TEXT("Started: %s"), *ActionName.ToString()), FColor::Green);

	UActionComponent* Comp = GetOwningComponent();	

	bIsRunning = true;
	Instigator = Actor;
	
	TimeStarted = GetWorld()->TimeSeconds;

	GetOwningComponent()->OnActionStarted.Broadcast(GetOwningComponent(), this);
}

void UAction::StopAction_Implementation(AActor* Actor)
{
	UE_LOG(LogTemp, Log, TEXT("Stopped: %s"), *GetNameSafe(this));
	//LogOnScreen(this, FString::Printf(TEXT("Stopped: %s"), *ActionName.ToString()), FColor::White);

	//ensureAlways(bIsRunning);

	UActionComponent* Comp = GetOwningComponent();

	bIsRunning = false;
	Instigator = Actor;

	GetOwningComponent()->OnActionStopped.Broadcast(GetOwningComponent(), this);
}

UWorld* UAction::GetWorld() const
{
	// Outer is set when creating action via NewObject<T>
	AActor* Actor = Cast<AActor>(GetOuter());
	if (Actor)
	{
		return Actor->GetWorld();
	}

	return nullptr;
}

UActionComponent* UAction::GetOwningComponent() const
{
	//AActor* Actor = Cast<AActor>(GetOuter());
	//return Actor->GetComponentByClass(USActionComponent::StaticClass());

	return ActionComp;
}

bool UAction::IsRunning() const
{
	return bIsRunning;
}