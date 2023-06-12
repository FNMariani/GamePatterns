// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "StateAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPATTERNS_API UStateAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	bool IsMoving;

public:
	APawn* OwningPawn;
    
	virtual void NativeInitializeAnimation() override;
    
	virtual void NativeUpdateAnimation(float DeltaTimeX) override;
};
