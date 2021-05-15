// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class GAMEMATHEMATICS_API Coordinates
{
public:
	Coordinates(float X, float Y);
	Coordinates(float X,float Y,float Z);
	Coordinates(FVector vector);
	~Coordinates();

	FVector ConvertToVector();

private:

	float X;
	float Y;
	float Z;

	friend class AShipPawn;
	friend class OwnMathematics;
};
