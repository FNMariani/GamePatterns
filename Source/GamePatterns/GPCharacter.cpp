// Fill out your copyright notice in the Description page of Project Settings.


#include "GPCharacter.h"

#include "Command/ActionComponent.h"

AGPCharacter::AGPCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	ActionComp = CreateDefaultSubobject<UActionComponent>("ActionComp");
}

void AGPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGPCharacter::SprintStart()
{
	ActionComp->StartActionByName(this, "Sprint");
}

void AGPCharacter::SprintStop()
{
	ActionComp->StopActionByName(this, "Sprint");
}

void AGPCharacter::PrimaryAttack()
{
	ActionComp->StartActionByName(this, "PrimaryAttack");
}

void AGPCharacter::Dash()
{
	ActionComp->StartActionByName(this, "Dash");
}

void AGPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("PrimaryAttack", IE_Pressed, this, &AGPCharacter::PrimaryAttack);
	PlayerInputComponent->BindAction("Dash", IE_Pressed, this, &AGPCharacter::Dash);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AGPCharacter::SprintStart);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AGPCharacter::SprintStop);
}

