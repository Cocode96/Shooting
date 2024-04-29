// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyShip.generated.h"
UCLASS()
class SHOOTING231223_API AEnemyShip : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere,Category = "Componenet")
	class UStaticMeshComponent* ShipM;

	UPROPERTY(EditAnywhere, Category = "Componenet")
	class USphereComponent* CollisionComp;

	// Sets default values for this actor's properties
	AEnemyShip();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
