using UnrealBuildTool;

public class RuntimeLineDraw : ModuleRules
{
    public RuntimeLineDraw(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core", "CoreUObject", "Engine"
        });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        // Ensure runtime-safe; no editor deps
        if (Target.Configuration == UnrealTargetConfiguration.Shipping ||
            Target.Configuration == UnrealTargetConfiguration.Test)
        {
            bUseRTTI = true;
        }
    }
}