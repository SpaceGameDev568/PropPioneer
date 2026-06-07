

#pragma once

#include "CoreMinimal.h"
#include "FGPlayerCustomizationDesc.h"
#include "Resources/FGItemDescriptor.h"
#include "PropFaceEquipmentDescriptor.generated.h"

/**
 * 
 */
UCLASS()
class PROPPIONEER_API UPropFaceEquipmentDescriptor : public UFGPlayerCustomizationDesc
{
	GENERATED_BODY()

public:
	UFUNCTION( BlueprintPure, Category="Player Customization|Equipment")
	static UStaticMesh* GetEquipmentMesh(TSubclassOf<UPropFaceEquipmentDescriptor> Desc)
	{
		return Desc->GetDefaultObject<UPropFaceEquipmentDescriptor>()->mEquipmentMesh;
	};

	UFUNCTION( BlueprintPure, Category="Player Customization|Equipment")
	static FTransform GetEquipmentOffset(TSubclassOf<UPropFaceEquipmentDescriptor> Desc)
	{
		return Desc->GetDefaultObject<UPropFaceEquipmentDescriptor>()->mEquipmentOffset;
	};

	UFUNCTION( BlueprintPure, Category="Player Customization|Equipment")
	static FName GetEquipmentSocketName(TSubclassOf<UPropFaceEquipmentDescriptor> Desc)
	{
		return Desc->GetDefaultObject<UPropFaceEquipmentDescriptor>()->EquipmentSocketName;
	};

private:
	/* Static mesh used. */
	UPROPERTY(EditDefaultsOnly, Category="Visuals")
	TObjectPtr<UStaticMesh> mEquipmentMesh;

	/* Offset applied to the mesh.*/
	UPROPERTY(EditDefaultsOnly,  Category="Visuals")
	FTransform mEquipmentOffset = FTransform::Identity;

	/* Socket to attach the mesh to. */
	UPROPERTY(EditDefaultsOnly, Category="Visuals")
	FName EquipmentSocketName = NAME_None;
};