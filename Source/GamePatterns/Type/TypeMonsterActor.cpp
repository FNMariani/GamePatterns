// Fill out your copyright notice in the Description page of Project Settings.


#include "TypeMonsterActor.h"
#include "TypeMonsterData.h"

ATypeMonsterActor::ATypeMonsterActor()
{
	if(MonsterData != nullptr)
	{
		Health = MonsterData->GetHealth();
	}
}

void ATypeMonsterActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATypeMonsterActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString ATypeMonsterActor::GetAttack() const
{
	if(MonsterData != nullptr)
	{
		return MonsterData->GetAttack();
	}

	return TEXT("");
}

