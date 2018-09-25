// Fill out your copyright notice in the Description page of Project Settings.

#include "Unit.h"


// Sets default values
AUnit::AUnit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("mesh"));
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
void AUnit::Heal(float healingAmt) {
	if (health + healingAmt > maxHealth)
		health = maxHealth;
	else
		health += healingAmt;
}
void AUnit::LevelUp() {
	health = maxHealth;//do something else
}
float AUnit::getModifiedDefense(float defModifier) {
	return defense * defModifier;//calculate how much defense we actually have
}
void AUnit::FindPath() {
	health = health;
	//do something else
}

void AUnit::Destroy() {
	//get rid of the unit
}