// Fill out your copyright notice in the Description page of Project Settings.


#include "ShipPawn.h"
#include "../Customize/Coordinates.h"
#include "../Maths/OwnMathematics.h"

// Sets default values
AShipPawn::AShipPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
	SetRootComponent(ShipMesh);

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	Speed = 0.5f;

}

// Called when the game starts or when spawned
void AShipPawn::BeginPlay()
{
	Super::BeginPlay();

	Direction = FVector(200,200,60) - this->GetActorLocation();

	Coordinates normal = mathematics->GetNormal(Coordinates(Direction));
	Direction = normal.ConvertToVector();
	
}

// Called every frame
void AShipPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



	if (mathematics->GetDistance(FVector(200, 200, 60),GetActorLocation()) > 10.0f)
	{
		FVector NewLocation = GetActorLocation() + (Direction * Speed * GetWorld()->DeltaTimeSeconds);

		this->SetActorLocation(NewLocation);
	}
	

}

// Called to bind functionality to input
void AShipPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

