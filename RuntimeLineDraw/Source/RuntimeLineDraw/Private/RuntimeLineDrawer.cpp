#include "RuntimeLineDrawer.h"
#include "Engine/World.h"
#include "Components/LineBatchComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/Engine.h"

static uint8 DepthBucket(bool bDepthTest)
{
    return bDepthTest ? (uint8)SDPG_World : (uint8)SDPG_Foreground;
}

ULineBatchComponent* URuntimeLineDrawer::GetOrCreateBatcher(UWorld* World, bool bDepthTest)
{
    if (!World) return nullptr;

    TObjectPtr<ULineBatchComponent>* Target =
        bDepthTest ? &World->PersistentLineBatcher : &World->ForegroundLineBatcher;

    if (!Target->Get())
    {
        ULineBatchComponent* NewBatcher = NewObject<ULineBatchComponent>(World);
        NewBatcher->RegisterComponentWithWorld(World);
        *Target = NewBatcher;           // 给 TObjectPtr 赋值
    }

    return Target->Get();               // 返回原生指针
}

void URuntimeLineDrawer::DrawLineRuntime(
    UObject* WorldContextObject,
    FVector Start,
    FVector End,
    FLinearColor Color,
    float Thickness,
    float LifeTime,
    bool bDepthTest
)
{
    if (!WorldContextObject) return;
    UWorld* World = WorldContextObject->GetWorld();
    if (!World) return;

    ULineBatchComponent* Batcher = GetOrCreateBatcher(World, bDepthTest);
    if (!Batcher) return;

    TArray<FBatchedLine> Lines;
    Lines.Emplace(Start, End, Color, Thickness, LifeTime, DepthBucket(bDepthTest));
    Batcher->DrawLines(Lines);
    Batcher->MarkRenderStateDirty();
}

void URuntimeLineDrawer::DrawLinesRuntime(
    UObject* WorldContextObject,
    const TArray<FVector>& Starts,
    const TArray<FVector>& Ends,
    const TArray<FLinearColor>& Colors,
    float Thickness,
    float LifeTime,
    bool bDepthTest
)
{
    if (!WorldContextObject) return;
    UWorld* World = WorldContextObject->GetWorld();
    if (!World) return;

    const int32 Count = FMath::Min(Starts.Num(), Ends.Num());
    if (Count <= 0) return;

    ULineBatchComponent* Batcher = GetOrCreateBatcher(World, bDepthTest);
    if (!Batcher) return;

    TArray<FBatchedLine> Lines;
    Lines.Reserve(Count);

    for (int32 i = 0; i < Count; ++i)
    {
        const FLinearColor UseColor = Colors.IsValidIndex(i) ? Colors[i] : FLinearColor::White;
        Lines.Emplace(Starts[i], Ends[i], UseColor, Thickness, LifeTime, DepthBucket(bDepthTest));
    }

    Batcher->DrawLines(Lines);
    Batcher->MarkRenderStateDirty();
}