

#pragma once

#include "CoreMinimal.h"
#include "FGPlayerCustomizationDesc.h"
#include "Resources/FGItemDescriptor.h"
#include "PropLegEquipmentDescriptor.generated.h"

/**
 * 
 */
UCLASS()
class PROPPIONEER_API UPropLegEquipmentDescriptor : public UFGPlayerCustomizationDesc
{
	GENERATED_BODY()

public:
	UFUNCTION( BlueprintPure, Category="Player Customization|Equipment")
	static USkeletalMesh* GetLeftEquipmentMesh(TSubclassOf<UPropLegEquipmentDescriptor> Desc)
	{
		return Desc->GetDefaultObject<UPropLegEquipmentDescriptor>()->mLeftEquipmentMesh;
	};

	UFUNCTION( BlueprintPure, Category="Player Customization|Equipment")
	static USkeletalMesh* GetRightEquipmentMesh(TSubclassOf<UPropLegEquipmentDescriptor> Desc)
	{
		return Desc->GetDefaultObject<UPropLegEquipmentDescriptor>()->mRightEquipmentMesh;
	};

	UFUNCTION( BlueprintPure, Category="Player Customization|Equipment")
	static FTransform GetLeftEquipmentOffset(TSubclassOf<UPropLegEquipmentDescriptor> Desc)
	{
		return Desc->GetDefaultObject<UPropLegEquipmentDescriptor>()->mLeftEquipmentOffset;
	};

	UFUNCTION( BlueprintPure, Category="Player Customization|Equipment")
	static FTransform GetRightEquipmentOffset(TSubclassOf<UPropLegEquipmentDescriptor> Desc)
	{
		return Desc->GetDefaultObject<UPropLegEquipmentDescriptor>()->mRightEquipmentOffset;
	};

	UFUNCTION( BlueprintPure, Category="Player Customization|Equipment")
	static FName GetLeftEquipmentSocketName(TSubclassOf<UPropLegEquipmentDescriptor> Desc)
	{
		return Desc->GetDefaultObject<UPropLegEquipmentDescriptor>()->LeftEquipmentSocketName;
	};

	UFUNCTION( BlueprintPure, Category="Player Customization|Equipment")
	static FName GetRightEquipmentSocketName(TSubclassOf<UPropLegEquipmentDescriptor> Desc)
	{
		return Desc->GetDefaultObject<UPropLegEquipmentDescriptor>()->RightEquipmentSocketName;
	};

private:
	/* Skelly mesh used. */
	UPROPERTY(EditDefaultsOnly, Category="Visuals")
	TObjectPtr<USkeletalMesh> mLeftEquipmentMesh;

	/* Offset applied to the mesh.*/
	UPROPERTY(EditDefaultsOnly,  Category="Visuals")
	FTransform mLeftEquipmentOffset = FTransform::Identity;

	/* Socket to attach the mesh to. */
	UPROPERTY(EditDefaultsOnly, Category="Visuals")
	FName LeftEquipmentSocketName = NAME_None;

	/* Skelly mesh used. */
	UPROPERTY(EditDefaultsOnly, Category="Visuals")
	TObjectPtr<USkeletalMesh> mRightEquipmentMesh;

	/* Offset applied to the mesh.*/
	UPROPERTY(EditDefaultsOnly,  Category="Visuals")
	FTransform mRightEquipmentOffset = FTransform::Identity;

	/* Socket to attach the mesh to. */
	UPROPERTY(EditDefaultsOnly, Category="Visuals")
	FName RightEquipmentSocketName = NAME_None;
};