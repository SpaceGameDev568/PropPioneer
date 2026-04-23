// Copyright 2023 - 2024 Jesse Hodgson

#include "PPIOStackableHologram.h"

bool APPIOStackableHologram::IsValidHitResult(const FHitResult& hitResult) const {
	// Always return a valid result if we hit something
	return hitResult.bBlockingHit;
}

