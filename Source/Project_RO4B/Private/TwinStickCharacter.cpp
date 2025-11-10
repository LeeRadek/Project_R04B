// Fill out your copyright notice in the Description page of Project Settings.


#include "TwinStickCharacter.h"

// Sets default values
ATwinStickCharacter::ATwinStickCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CharacterUpgrades.SetNum(3);

}

// Called when the game starts or when spawned
void ATwinStickCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATwinStickCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATwinStickCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

