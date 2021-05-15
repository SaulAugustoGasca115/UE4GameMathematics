// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "ShipPawn.generated.h"

UCLASS()
class GAMEMATHEMATICS_API AShipPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AShipPawn();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="MeshComponent")
	UStaticMeshComponent* ShipMesh;

	UPROPERTY(EditAnywhere)
	FVector Direction;

	UPROPERTY(EditAnywhere)
	float Speed;

	class Coordinates* coordinates;
	class OwnMathematics* mathematics;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
