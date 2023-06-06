// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionComponent.h"

#include "Action.h"

UActionComponent::UActionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UActionComponent::BeginPlay()
{
	Super::BeginPlay();
	
	for (TSubclassOf<UAction> ActionClass : DefaultActions)
	{
		AddAction(GetOwner(), ActionClass);
	}
}

void UActionComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// Stop all
	TArray<UAction*> ActionsCopy = Actions;
	for (UAction* Action : ActionsCopy)
	{
		if (Action && Action->IsRunning())
		{
			Action->StopAction(GetOwner());
		}
	}

	Super::EndPlay(EndPlayReason);
}

void UActionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Draw All Actions
 	for (UAction* Action : Actions)
 	{
 		FColor TextColor = Action->IsRunning() ? FColor::Blue : FColor::White;
 		FString ActionMsg = FString::Printf(TEXT("[%s] Action: %s"), *GetNameSafe(GetOwner()), *GetNameSafe(Action));

 		if (GEngine)
 		{
 			GEngine->AddOnScreenDebugMessage(-1, 0.0f, TextColor, ActionMsg);
 		}
 	}
}

void UActionComponent::AddAction(AActor* Instigator, TSubclassOf<UAction> ActionClass)
{
	if (!ensure(ActionClass))
	{
		return;
	}

	UAction* NewAction = NewObject<UAction>(GetOwner(), ActionClass);
	if (ensure(NewAction))
	{
		NewAction->Initialize(this);

		Actions.Add(NewAction);

		if (NewAction->bAutoStart && ensure(NewAction->CanStart(Instigator)))
		{
			NewAction->StartAction(Instigator);
		}
	}
}

void UActionComponent::RemoveAction(UAction* ActionToRemove)
{
	if (!ensure(ActionToRemove && !ActionToRemove->IsRunning()))
	{
		return;
	}

	Actions.Remove(ActionToRemove);
}

UAction* UActionComponent::GetAction(TSubclassOf<UAction> ActionClass) const
{
	for (UAction* Action : Actions)
	{
		if (Action && Action->IsA(ActionClass))
		{
			return Action;
		}
	}

	return nullptr;
}

bool UActionComponent::StartActionByName(AActor* Instigator, FName ActionName)
{
	for (UAction* Action : Actions)
	{
		if (Action && Action->ActionName == ActionName)
		{
			if (!Action->CanStart(Instigator))
			{
				FString FailedMsg = FString::Printf(TEXT("Failed to run: %s"), *ActionName.ToString());
				GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, FailedMsg);
				continue;
			}

			Action->StartAction(Instigator);
			return true;
		}
	}

	return false;
}

bool UActionComponent::StopActionByName(AActor* Instigator, FName ActionName)
{
	for (UAction* Action : Actions)
	{
		if (Action && Action->ActionName == ActionName)
		{
			if (Action->IsRunning())
			{
				Action->StopAction(Instigator);
				return true;
			}
		}
	}

	return false;
}