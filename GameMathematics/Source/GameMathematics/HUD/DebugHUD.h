// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/Canvas.h"
#include "CanvasItem.h"
#include "DebugHUD.generated.h"

/**
 * 
 */
UCLASS()
class GAMEMATHEMATICS_API ADebugHUD : public AHUD
{
	GENERATED_BODY()

public:

	ADebugHUD();

	//Add a FText to the HUD for rendering
	void AddText(const TCHAR* title, const FText& value)
	{
		RenderStatistic(title, value);
	}

	//Add a Float to HUD for rendering
	void AddFloat(const TCHAR* title, float value)
	{
		RenderStatistic(title, FText::AsNumber(value));

	}

	//Add a int32 to HUD for rendering
	void AddInt(const TCHAR* title, int32 value)
	{
		RenderStatistic(title, FText::AsNumber(value));
	}

	//add a bool to HUD for rendering
	void AddBool(const TCHAR* title, bool value)
	{
		BoolToText(value);
	}

	void AddVector(const TCHAR* title, FVector position)
	{
		RenderStatistic(title, FText::AsNumber(position.X + position.Y + position.Z));
	}

	virtual void DrawHUD() override
	{
		X = Y = 50;
	}

	float HorizontalOffset = 150.0f;

private:

	//Convert a TCHAR pointer to FText
	FText CStringToText(const TCHAR* text)
	{
		return FText::FromString(text);
	}

	//convert a Bool to Text
	FText BoolToText(bool value)
	{
		return CStringToText((value == true) ? TEXT("true") : TEXT("false"));
	}



	//render a statistic onto HUD CANVAS
	void RenderStatistic(const TCHAR* title, const FText& value, const FLinearColor& valueColor = FLinearColor::Yellow)
	{
		FCanvasTextItem item0(FVector2D(X, Y), CStringToText(title), MainFont, FLinearColor::White);
		item0.EnableShadow(FLinearColor(0, 0, 0));
		Canvas->DrawItem(item0);

		FCanvasTextItem item1(FVector2D(X + HorizontalOffset, Y), value, MainFont, valueColor);
		item1.EnableShadow(FLinearColor(0, 0, 0));
		Canvas->DrawItem(item1);

		Y += lineHeight;

	}

	//font used to use to rtedner the information
	UPROPERTY(Transient)
		UFont* MainFont = nullptr;

	//the current x position
	float X = 150.0f;

	//the current y position
	float Y = 150.0f;

	//the line height to separate each HUD entry
	float lineHeight = 30.0f;
};
