// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Unit.h"
#include "BaseTile.generated.h"

UCLASS()
class PROJECTEMBLEM_API ABaseTile : public AActor
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere)
		float m_Defense;
	UPROPERTY(EditAnywhere)
		float m_MovementModifier;
	UPROPERTY(EditAnywhere)
		AUnit* unit;
public:	
	// Sets default values for this actor's properties
	ABaseTile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* mesh;

	UFUNCTION(BlueprintCallable)
		AUnit* GetUnit();
	UFUNCTION(BlueprintCallable)
		void SetUnit(AUnit* localUnit);
};
