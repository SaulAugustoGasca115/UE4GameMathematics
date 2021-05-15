// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class Coordinates;
class GAMEMATHEMATICS_API OwnMathematics
{
public:
	OwnMathematics();
	~OwnMathematics();

	float Square(float value);
	float GetDistance(Coordinates vector1,Coordinates vector2);
	Coordinates GetNormal(Coordinates vector);
};
