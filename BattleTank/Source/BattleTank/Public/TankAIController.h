// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

// Foward Declarations
class ATank;
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

public: 
	void AIAimingAt(FVector HitLocation);

private:
	ATank* GetControlledTank() const;
	virtual void Tick(float DeltaSeconds) override;
	virtual void BeginPlay() override;

	ATank* GetPlayerTank() const;
};
