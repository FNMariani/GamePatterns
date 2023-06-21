// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TypeMonsterActor.generated.h"

UCLASS()
class GAMEPATTERNS_API ATypeMonsterActor : public AActor
{
	GENERATED_BODY()
	
public:
	ATypeMonsterActor();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Monster")
	int Health;
	
	UPROPERTY(EditAnywhere, Category = "Monster")
	TObjectPtr<class UTypeMonsterData> MonsterData;

	UFUNCTION(BlueprintCallable)
	FString GetAttack() const;
};
