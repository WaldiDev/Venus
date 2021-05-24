using UnrealBuildTool;

public class VenusEditorTarget : TargetRules
{
	public VenusEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "VenusCore" } );
	}
}
