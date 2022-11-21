// Fill out your copyright notice in the Description page of Project Settings.


#include "GhostTail.h"
#include "Components/PoseableMeshComponent.h"
#include "Kismet/KismetMaterialLibrary.h"



// Sets default values
AGhostTail::AGhostTail()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PoseableMesh = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("POSEABLEMESH"));
	RootComponent = PoseableMesh;
	ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_PoseMesh(TEXT("SkeletalMesh'/Game/ParagonMuriel/Characters/Heroes/Muriel/Skins/Tier_1/Muriel_sepia/Meshes/MurielSepia.MurielSepia'"));
	if (SK_PoseMesh.Succeeded())
	{
		PoseableMesh->SetSkeletalMesh(SK_PoseMesh.Object);
	}
	ConstructorHelpers::FObjectFinder<UMaterialInstance> M_GhostTail(TEXT("Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"));
	if (M_GhostTail.Succeeded())
	{
		GhostMaterial = M_GhostTail.Object;
	}

}

// Called when the game starts or when spawned
void AGhostTail::BeginPlay()
{
	Super::BeginPlay();
	

}

void AGhostTail::Init(USkeletalMeshComponent* Pawn)
{
	if(PoseableMesh != nullptr)
		PoseableMesh->CopyPoseFromSkeletalComponent(Pawn);
	TArray<UMaterialInterface*> Mats = PoseableMesh->GetMaterials();

	for (int i = 0; i < Mats.Num(); i++)
	{
		Materials.Add(UKismetMaterialLibrary::CreateDynamicMaterialInstance(GetWorld(), GhostMaterial));
		PoseableMesh->SetMaterial(i, Materials[i]);
	}
	FadeCountDown = FadeOutTime;
	bActiveGhostTail = true;
}



// Called every frame
void AGhostTail::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bActiveGhostTail)
	{
		FadeCountDown -= DeltaTime;
		for (int i = 0; i < Materials.Num(); i++)
		{
			Materials[i]->SetScalarParameterValue("Opacity", FadeCountDown / FadeOutTime);
		}
		if (FadeCountDown < 0)
		{
			Destroy();
		}
	}
}

