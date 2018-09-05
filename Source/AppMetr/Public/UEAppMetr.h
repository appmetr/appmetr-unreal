#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class IAnalyticsProvider;

/**
 * The public interface to this module
 */
class FAppMetr : public IModuleInterface
{
public:
    /**
     * Singleton-like access to this module's interface.  This is just for convenience!
     * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
     *
     * @return Returns singleton instance, loading the module on demand if needed
     */
    static inline FAppMetr& Get()
    {
        return FModuleManager::LoadModuleChecked< FAppMetr >( "AppMetr" );
    }

private:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
