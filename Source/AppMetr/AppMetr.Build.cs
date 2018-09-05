using UnrealBuildTool;
using System.IO;
using System;


namespace UnrealBuildTool.Rules
{
    public class AppMetr : ModuleRules
    {
        public AppMetr(ReadOnlyTargetRules Target) : base(Target)
        {
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

            if (Target.Platform == UnrealTargetPlatform.Android) {
                PrivateDependencyModuleNames.Add("Launch");
            }

            PublicIncludePaths.AddRange(
                new string[] {
                    Path.GetFullPath(Path.Combine(ModuleDirectory, "Public")),
                }
            );

            PrivateIncludePaths.AddRange(
                new string[] {
                    Path.GetFullPath(Path.Combine(ModuleDirectory, "Private")),
                    Path.GetFullPath(Path.Combine(ModuleDirectory, "Public")),
                }
            );

            PublicDependencyModuleNames.AddRange(
                new string[]
                {
                    "Core",
                    "CoreUObject",
                    "Engine",
                }
            );

            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "Core",
                    "Engine",
                }
            );

            PublicIncludePathModuleNames.AddRange(
                new string[]
                {
                    "Core",
                    "Engine",
                }
            );

            PrivateIncludePathModuleNames.AddRange(
                new string[]
                {
                    "Core",
                    "Engine",
                }
            );

            if (Target.Platform == UnrealTargetPlatform.Android)
            {
                AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(ModuleDirectory, "AppMetr_APL.xml"));
            }
        }
    }
}
