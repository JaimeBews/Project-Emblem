// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "BaseTile.h"

#include "Unit.generated.h"

UCLASS()
class PROJECTEMBLEM_API AUnit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
		float health;
	UPROPERTY(EditAnywhere)
		float movementRange;
	UPROPERTY(EditAnywhere)
		float maxHealth;
	UPROPERTY(EditAnywhere)
		float attackRange;
	UPROPERTY(EditAnywhere)
		float agility;
	UPROPERTY(EditAnywhere)
		float strength;
	UPROPERTY(EditAnywhere)
		int inventory[10];
	UPROPERTY(EditAnywhere)
		ABaseTile *currTile;
	
		void takeDamage(float damage);
	
		void FindPath();
	
		void Destroy();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* mesh;
	
	
};
