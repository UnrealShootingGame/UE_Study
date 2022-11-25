// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"

// Sets default values
AShooterCharacter::AShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> mm(TEXT("SkeletalMesh'/Game/ParagonMuriel/Characters/Heroes/Muriel/Skins/Tier_1/Muriel_sepia/Meshes/MurielSepia.MurielSepia'"));
	if (mm.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(mm.Object);
		CharacterSkeletalMesh = mm.Object;
		
		UE_LOG(LogTemp, Display, TEXT("%s"),*GetMesh()->GetSkeletalMeshAsset()->GetName());
	}
}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();

	DashCount = MaxDashCount;
	UE_LOG(LogTemp, Display, TEXT("%s"), *GetMesh()->GetSkeletalMeshAsset()->GetName());
	
	GetMesh()->SetSkeletalMesh(CharacterSkeletalMesh);
}

// Called every frame
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AShooterCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AShooterCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AShooterCharacter::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AShooterCharacter::LookUp);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &AShooterCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Dash"), EInputEvent::IE_Pressed, this, &AShooterCharacter::Dash);
}

void AShooterCharacter::MoveForward(float Value)
{
	if (Controller != nullptr && Value != 0.f)
	{
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X));
		AddMovementInput(Direction, Value);
	}
}

void AShooterCharacter::MoveRight(float Value)
{
	if (Controller != nullptr && Value != 0.f)
	{
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y));
		AddMovementInput(Direction, Value);
	}
}

void AShooterCharacter::Turn(float Value)
{
	AddControllerYawInput(Value);
}

void AShooterCharacter::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}

void AShooterCharacter::Jump()
{
	Super::Jump();


}

void AShooterCharacter::Dash()
{
	if (DashCount > 0)
	{
		//CharacterGhostTail->Init(CharacterMesh);
		
		const FVector ForwardDir = GetActorRotation().Vector();
		LaunchCharacter(ForwardDir * DashDistance, true, true);
		DashCount--;

		GetWorldTimerManager().SetTimer(DashTimerHandle, this, &AShooterCharacter::AddDashCount, DashCoolTime, false);

		UE_LOG(LogTemp, Display, TEXT("Dash"));
	}
	else
	{

	}
}