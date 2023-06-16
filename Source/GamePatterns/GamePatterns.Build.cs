// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO; 

public class GamePatterns : ModuleRules
{
	public GamePatterns(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
		
		string ThirdPartyDirectory = System.IO.Path.Combine(ModuleDirectory, "../..", "ThirdParty");
	
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicIncludePaths.Add(Path.Combine(ThirdPartyDirectory, "Lua", "include"));
			PublicAdditionalLibraries.Add(System.IO.Path.Combine(ThirdPartyDirectory, "Lua/libraries", "lua54.x64.lib"));
		}
	}
}
