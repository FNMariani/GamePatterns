// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Action.h"
#include "ActionPrimaryAttack.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPATTERNS_API UActionPrimaryAttack : public UAction
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Attack")
	float AttackAnimDelay;

	UFUNCTION()
	void AttackDelay_Elapsed(ACharacter* InstigatorCharacter);

public:

	virtual void StartAction_Implementation(AActor* Instigator) override;

	UActionPrimaryAttack();
};
