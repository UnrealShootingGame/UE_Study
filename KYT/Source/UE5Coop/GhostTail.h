// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GhostTail.generated.h"

class UPoseableMeshComponent;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class USkeletalMeshComponent;

UCLASS()
class UE5COOP_API AGhostTail : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGhostTail();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	void Init(USkeletalMeshComponent* Pawn);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	bool bActiveGhostTail = false;

	float FadeCountDown;
	float FadeOutTime = 0.5f;

	UPoseableMeshComponent* PoseableMesh;
	UMaterialInstance* GhostMaterial;
	TArray<UMaterialInstanceDynamic*> Materials;

public:
	void ActivateGhostTail() { bActiveGhostTail = true; }

};
