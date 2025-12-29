// Fill out your copyright notice in the Description page of Project Settings.


#include "TwinStickCharacter.h"
#include "InventoryComponent.h"


// Sets default values
ATwinStickCharacter::ATwinStickCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//Camera Setup
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 600.f;
	SpringArm->SetAbsolute(false, true, false);
	SpringArm->SetWorldRotation(FRotator(-50.0f, 45.0f, 0.0f));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

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







