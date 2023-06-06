// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionPrimaryAttack.h"

#include "GameFramework/Character.h"

UActionPrimaryAttack::UActionPrimaryAttack()
{
	AttackAnimDelay = 0.2f;
	
}

void UActionPrimaryAttack::StartAction_Implementation(AActor* Actor)
{
	Super::StartAction_Implementation(Actor);

	ACharacter* Character = Cast<ACharacter>(Actor);
	if (Character)
	{
		FTimerHandle TimerHandle_AttackDelay;
		FTimerDelegate Delegate;
		Delegate.BindUFunction(this, "AttackDelay_Elapsed", Character);

		GetWorld()->GetTimerManager().SetTimer(TimerHandle_AttackDelay, Delegate, AttackAnimDelay, false);
	}
}


void UActionPrimaryAttack::AttackDelay_Elapsed(ACharacter* Actor)
{
	/*if (ensureAlways(ProjectileClass))
	{
		GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnTM, SpawnParams);
	}*/

	StopAction(Actor);
}
