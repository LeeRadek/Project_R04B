#pragma once

#include "FModuleData.generated.h"

USTRUCT( BlueprintType )
struct FModuleData
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category="Module Data" )
	FName ModuleName;
	
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category="Module Data" )
	FText ModuleDescription;
	
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category="Module Data" )
	UTexture2D* ModuleIcon;
	
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category="Module Data" )
	TSubclassOf<class UModuleLogicObject> ModuleClass;
	
	FModuleData()
	{
		ModuleName = FName( "Default Module" );
		ModuleDescription = FText::FromString( "Default Module Description" );
		ModuleIcon = nullptr;
		ModuleClass = nullptr;
	}
};
