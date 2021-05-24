#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"

class FVenusCore : public IModuleInterface
{
public:
	static inline FVenusCore& Get()
	{
		return FModuleManager::LoadModuleChecked<FVenusCore>("VenusCore");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("VenusCore");
	}

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
