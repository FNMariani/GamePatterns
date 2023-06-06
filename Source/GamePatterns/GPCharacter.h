// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GPCharacter.generated.h"

UCLASS()
class GAMEPATTERNS_API AGPCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AGPCharacter();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<class UActionComponent> ActionComp;

	void SprintStart();

	void SprintStop();

	void PrimaryAttack();

	void Dash();

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
