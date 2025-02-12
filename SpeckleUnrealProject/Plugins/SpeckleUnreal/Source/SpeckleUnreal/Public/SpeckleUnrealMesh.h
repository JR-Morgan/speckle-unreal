// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "SpeckleUnrealMesh.generated.h"

UCLASS(BlueprintType)
class SPECKLEUNREAL_API ASpeckleUnrealMesh : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
		USceneComponent* Scene;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UProceduralMeshComponent* ProceduralMesh;

	// Sets default values for this actor's properties
	ASpeckleUnrealMesh();

	virtual void SetMesh(const TArray<FVector> &Vertices, const TArray<int32> &Triangles, UMaterialInterface* Material, FLinearColor Color);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
