// Fill out your copyright notice in the Description page of Project Settings.


#include "ShipHUD.h"
#include "../Pawns/ShipPawn.h"

void AShipHUD::DrawHUD()
{
	Super::DrawHUD();

	AShipPawn* Ship = Cast<AShipPawn>(GetOwningPawn());

	if (Ship != nullptr)
	{
		AddFloat(L"Ship X Position: ", Ship->Direction.X);
		AddFloat(L"Ship Y Position: ", Ship->Direction.Y);
		AddFloat(L"Ship Z Position: ", Ship->Direction.Z);
		
	}

	

}

