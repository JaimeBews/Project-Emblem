// Fill out your copyright notice in the Description page of Project Settings.

#include "Unit.h"


// Sets default values
AUnit::AUnit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
		RootComponent = mesh;
}

// Called when the game starts or when spawned
void AUnit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AUnit::takeDamage(float damage) {
	if (health - damage > 0)
		health -= damage;
	else
		Destroy();
}

void AUnit::FindPath() {
	health = health;
	//do something else
}

void AUnit::Destroy() {
	//get rid of the unit
}