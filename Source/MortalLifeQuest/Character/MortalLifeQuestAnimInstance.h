// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MortalLifeQuestAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class MORTALLIFEQUEST_API UMortalLifeQuestAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
    // Aim Target Location
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Aiming")
    FVector AimTargetLocation;

    // Skeletal Mesh Location
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Aiming")
    FVector CharacterLocation;
	
};
