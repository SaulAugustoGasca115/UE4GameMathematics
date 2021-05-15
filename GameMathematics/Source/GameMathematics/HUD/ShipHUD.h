// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DebugHUD.h"
#include "ShipHUD.generated.h"

/**
 * 
 */
UCLASS()
class GAMEMATHEMATICS_API AShipHUD : public ADebugHUD
{
	GENERATED_BODY()

public:

	//AShipHUD();

	virtual void DrawHUD() override;

	//class AShipPawn* Ship;
	
};
