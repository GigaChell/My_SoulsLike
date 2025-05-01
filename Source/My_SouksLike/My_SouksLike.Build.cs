// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class My_SouksLike : ModuleRules
{
	public My_SouksLike(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
