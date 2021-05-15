// Copyright Epic Games, Inc. All Rights Reserved.


#include "GameMathematicsGameModeBase.h"
#include "./HUD/DebugHUD.h"

AGameMathematicsGameModeBase::AGameMathematicsGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	HUDClass = ADebugHUD::StaticClass();
}