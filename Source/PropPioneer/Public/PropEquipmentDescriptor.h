

#pragma once

#include "CoreMinimal.h"
#include "FGPlayerCustomizationDesc.h"
#include "Resources/FGItemDescriptor.h"
#include "PropEquipmentDescriptor.generated.h"

/**
 * 
 */
UCLASS()
class PROPPIONEER_API UPropEquipmentDescriptor : public UFGPlayerCustomizationDesc
{
	GENERATED_BODY()

public:
	UFUNCTION( BlueprintPure, Category="Player Customization|Equipment")
	static USkeletalMesh* GetEquipmentMesh(TSubclassOf<UPropEquipmentDescriptor> Desc)
	{
		return Desc->GetDefaultObject<UPropEquipmentDescriptor>()->mEquipmentMesh;
	};

	UFUNCTION( BlueprintPure, Category="Player Customization|Equipment")
	static FTransform GetEquipmentOffset(TSubclassOf<UPropEquipmentDescriptor> Desc)
	{
		return Desc->GetDefaultObject<UPropEquipmentDescriptor>()->mEquipmentOffset;
	};

	UFUNCTION( BlueprintPure, Category="Player Customization|Equipment")
	static FName GetEquipmentSocketName(TSubclassOf<UPropEquipmentDescriptor> Desc)
	{
		return Desc->GetDefaultObject<UPropEquipmentDescriptor>()->EquipmentSocketName;
	};

	UFUNCTION( BlueprintPure, Category="Player Customization|Helmets")
    	static TArray<UMaterialInterface*> GetEquipmentMaterialOverrides(TSubclassOf<UPropEquipmentDescriptor> Desc)
    	 {
         	return Desc->GetDefaultObject<UPropEquipmentDescriptor>()->mEquipmentMaterialOverrides;
         };

private:
	/* Skelly mesh used. */
	UPROPERTY(EditDefaultsOnly,Category="Visuals")
	TObjectPtr<USkeletalMesh> mEquipmentMesh;

	/* Offset applied to the mesh.*/
	UPROPERTY(EditDefaultsOnly, Category="Visuals")
	FTransform mEquipmentOffset = FTransform::Identity;

	/* Socket to attach the mesh to. */
	UPROPERTY(EditDefaultsOnly,Category="Visuals")
	FName EquipmentSocketName = NAME_None;

	/* Used to override current materials, make sure it has the same length as the default number of materials the array ID should be the same as the material slot id.*/
    UPROPERTY(EditDefaultsOnly,Category="Visuals")
    TArray<TObjectPtr<UMaterialInterface>> mEquipmentMaterialOverrides;
};