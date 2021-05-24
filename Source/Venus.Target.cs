using UnrealBuildTool;

public class VenusTarget : TargetRules
{
	public VenusTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "VenusCore" } );
	}
}
