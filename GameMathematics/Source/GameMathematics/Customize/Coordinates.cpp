// Fill out your copyright notice in the Description page of Project Settings.


#include "Coordinates.h"

//Coordinates::Coordinates()
//{
//}

Coordinates::Coordinates(float X, float Y)
{
	this->X = X;
	this->Y = Y;
}

Coordinates::Coordinates(float X, float Y, float Z)
{
	this->X = X;
	this->Y = Y;
	this->Z = Z;
}

Coordinates::Coordinates(FVector vector)
{
	this->X = vector.X;
	this->Y = vector.Y;
	this->Z = vector.Z;
}

Coordinates::~Coordinates()
{
}

FVector Coordinates::ConvertToVector()
{
	return FVector(this->X,this->Y,this->Z);
}
