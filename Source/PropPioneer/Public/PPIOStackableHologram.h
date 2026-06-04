// Copyright 2023 - 2024 Jesse Hodgson

#pragma once

#include "CoreMinimal.h"
#include "Hologram/FGGenericBuildableHologram.h"
#include "PPIOStackableHologram.generated.h"

UCLASS()
class PROPPIONEER_API APPIOStackableHologram : public AFGGenericBuildableHologram
{
	GENERATED_BODY()

public:

	virtual bool IsValidHitResult(const FHitResult& hitResult) const override;
};
