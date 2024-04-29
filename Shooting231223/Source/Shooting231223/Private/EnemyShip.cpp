// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyShip.h"
#include "Components/SphereComponent.h"
// Sets default values
AEnemyShip::AEnemyShip()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));

	ShipM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipSM"));
	ShipM->SetupAttachment(RootComponent);
	//컨트롤 + 알트 + F11 라이브 코딩
}

// Called when the game starts or when spawned
void AEnemyShip::BeginPlay()
{
	Super::BeginPlay();
	

}

// Called every frame
void AEnemyShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

