#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "RuntimeLineDrawer.generated.h"

/**
 * Runtime line drawing for Release/Shipping using ULineBatchComponent.
 */
UCLASS()
class RUNTIMELINEDRAW_API URuntimeLineDrawer : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /** Draw a single line */
    UFUNCTION(BlueprintCallable, Category="RuntimeDraw", meta=(WorldContext="WorldContextObject"))
    static void DrawLineRuntime(
        UObject* WorldContextObject,
        FVector Start,
        FVector End,
        FLinearColor Color = FLinearColor::Red,
        float Thickness = 2.f,
        float LifeTime = 0.f,
        bool bDepthTest = true
    );

    /** Draw multiple lines in one call */
    UFUNCTION(BlueprintCallable, Category="RuntimeDraw", meta=(WorldContext="WorldContextObject"))
    static void DrawLinesRuntime(
        UObject* WorldContextObject,
        const TArray<FVector>& Starts,
        const TArray<FVector>& Ends,
        const TArray<FLinearColor>& Colors,
        float Thickness = 2.f,
        float LifeTime = 0.f,
        bool bDepthTest = true
    );

private:
    static class ULineBatchComponent* GetOrCreateBatcher(class UWorld* World, bool bDepthTest);
};