// Fill out your copyright notice in the Description page of Project Settings.


#include "TwinStickCharacter.h"

#include "WorldPartition/ContentBundle/ContentBundleLog.h"


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
	
	//Init Upgrades Arrays
	CharacterUpgrades.SetNum(3);
	WeaponUpgrades.SetNum(3);

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

void ATwinStickCharacter::SetCharacterModulesAtIndex(int32 Index, UModuleLogicObject* NewModule)
{
	if (!CharacterUpgrades.IsValidIndex(Index))
	{
		return;
	}
	
	UModuleLogicObject* OldModule = CharacterUpgrades[Index];
	
	if (OldModule == NewModule)
	{
		return;
	}
	
	if (OldModule)
	{
		OldModule->OnRemoved();
	}
	
	CharacterUpgrades[Index] = NewModule;
	
	if (NewModule)
	{
		NewModule->Initialize(this);
		NewModule->OnGranted();
	}
}

void ATwinStickCharacter::SetWeaponModulesAtIndex(int32 Index, UModuleLogicObject* NewModule)
{
	if (!WeaponUpgrades.IsValidIndex(Index))
	{
		return;
	}
	
	UModuleLogicObject* OldModule = WeaponUpgrades[Index];
	
	if (OldModule == NewModule)
	{
		return;
	}
	
	if (OldModule)
	{
		OldModule->OnRemoved();
	}
	
	WeaponUpgrades[Index] = NewModule;
	
	if (NewModule)
	{
		NewModule->Initialize(this);
		NewModule->OnGranted();
	}
}
//Removes the module at the specified index in the CharacterUpgrades array
void ATwinStickCharacter::RemoveCharacterModule(int32 Index)
{
	if (!CharacterUpgrades.IsValidIndex(Index))
	{
		return;
	}
	
	UModuleLogicObject* Module = CharacterUpgrades[Index];
	
	if (Module)
	{
		Module->OnGranted();
		CharacterUpgrades[Index] = nullptr;
	}
}
// Remove a weapon module at the specified index
void ATwinStickCharacter::RemoveWeaponModule(int32 Index)
{
	if (!WeaponUpgrades.IsValidIndex(Index))
	{
		return;
	}
	
	UModuleLogicObject* Module = WeaponUpgrades[Index];
	
	if (Module)
	{
		Module->OnRemoved();
		WeaponUpgrades[Index] = nullptr;
	}
}

