// Fill out your copyright notice in the Description page of Project Settings.


#include "OwnMathematics.h"
#include "../Customize/Coordinates.h"

OwnMathematics::OwnMathematics()
{
}

OwnMathematics::~OwnMathematics()
{
}

float OwnMathematics::Square(float value)
{
	return value * value;
}

float OwnMathematics::GetDistance(Coordinates vector1, Coordinates vector2)
{

	float distance = Square(vector1.X - vector2.X) + Square(vector1.Y - vector2.Y) + Square(vector1.Z - vector2.Z);
	return FMath::Sqrt(distance);
}

Coordinates OwnMathematics::GetNormal(Coordinates vector)
{
	float length = GetDistance(FVector(0,0,0),vector);

	vector.X /= length;
	vector.Y /= length;
	vector.Z /= length;
	
	return vector;
}
