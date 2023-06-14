// Fill out your copyright notice in the Description page of Project Settings.


#include "GameLoopGameModeBase.h"

float AGameLoopGameModeBase::GetAverageFPS()
{
	extern ENGINE_API float GAverageFPS;
	return GAverageFPS;
}