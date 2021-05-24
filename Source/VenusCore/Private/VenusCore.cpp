#include "VenusCore.h"
#include "Modules/ModuleManager.h"

#include "Log.h"

void FVenusCore::StartupModule()
{
	UE_LOG(LogVenusCore, Log, TEXT("VenusCore module starting up"));
}

void FVenusCore::ShutdownModule()
{
	UE_LOG(LogVenusCore, Log, TEXT("VenusCore module shutting down"));
}

IMPLEMENT_PRIMARY_GAME_MODULE(FVenusCore, VenusCore, "VenusCore");
