# Runtime Line Draw (UE5 Plugin)

Draw debug-like lines at runtime in **Release/Shipping** builds using `ULineBatchComponent`.
Works on PC/Mobile/Console (no editor dependencies).

## Install
1. Unzip into your project's `Plugins/` folder so the path is:  
   `YourProject/Plugins/RuntimeLineDraw/`
2. Launch UE. The plugin will be detected automatically. Enable it if needed in **Edit > Plugins**.

## Use (Blueprint)
- Nodes:
  - `Draw Line Runtime`
  - `Draw Lines Runtime`
- Tip: set `LifeTime > 0` (e.g. 2.0) to keep the line visible for seconds. `0` = one frame only.
- `bDepthTest = false` draws on top (no occlusion).

## Use (C++)
```cpp
#include "RuntimeLineDrawer.h"

URuntimeLineDrawer::DrawLineRuntime(
    this,
    FVector(0,0,100), FVector(300,0,100),
    FLinearColor::Green,
    3.f, 2.f, true
);
```

## Notes
- Avoid adding thousands of new lines every tick.
- If calling very early in BeginPlay, consider delaying 1 frame.
- No editor-only modules are referenced; safe for Shipping/Test/Development.