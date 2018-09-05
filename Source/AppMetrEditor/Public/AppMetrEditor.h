#pragma once

#include "Modules/ModuleManager.h"

/**
* The public interface to this module
*/
class FAppMetrEditor : public IModuleInterface
{

public:
    /** IModuleInterface implementation */
    void StartupModule();
    void ShutdownModule();
};