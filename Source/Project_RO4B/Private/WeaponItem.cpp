// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponItem.h"

#include "Chaos/PBDJointConstraintData.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"


// Sets default values
AWeaponItem::AWeaponItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	//RootComponent = CollisionComponent;
	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootComp;
	CollisionComponent->SetupAttachment(RootComp);
	MeshComponent->SetupAttachment(CollisionComponent);
	
	CollisionComponent->SetSphereRadius(32.0f);
	

}

// Called when the game starts or when spawned
void AWeaponItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeaponItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

