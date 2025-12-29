#pragma once

#include "FWeaponRuntimeData.generated.h"

class UModuleLogicObject;

USTRUCT( BlueprintType )
struct FWeaponRuntimeData
{
	GENERATED_BODY()
public:
	
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category="Weapon Runtime Data" )
	int32 CurrentAmmo;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category="Weapon Runtime Data" )
	int32 MaxAmmo;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Runtime Data" )
	TArray<TSubclassOf<UModuleLogicObject>> Modules;

	FWeaponRuntimeData()
	{
		CurrentAmmo = 0;
		MaxAmmo = 0;
		Modules.Empty();
	}
};