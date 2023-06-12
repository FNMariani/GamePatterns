// Fill out your copyright notice in the Description page of Project Settings.


#include "StateAnimInstance.h"

void UStateAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
    
	//Cache the owning pawn for use in Tick
	OwningPawn = TryGetPawnOwner();
}

void UStateAnimInstance::NativeUpdateAnimation(float DeltaTimeX)
{
	Super::NativeUpdateAnimation(DeltaTimeX);
	
	if (!OwningPawn) 
	{
		return;
	}
    
	//Set whether moving or not
	IsMoving = (OwningPawn->GetVelocity().SizeSquared() > 25);
}
