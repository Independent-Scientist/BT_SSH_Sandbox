// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BG_SSHActor.h"
#include "BG_SSHTable.generated.h"


/**
 * 
 */
UCLASS()
class BG_SSH_API ABG_SSHTable : public ABG_SSHActor
{
	GENERATED_BODY()
	
public:
	ABG_SSHTable();
	
protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BG_SSH")
	class UStaticMeshComponent* TableMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BG_SSH")
	class UStaticMeshComponent* TerminalMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BG_SSH")
	class UBoxComponent* BoxInteractionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BG_SSH")
	class UMaterialInstanceDynamic* DynamicMatInstance;

	UFUNCTION()
	virtual void OnCanvasRenderTargetUpdate(class UCanvas* Canvas, int32 Width, int32 Height) override;
};
