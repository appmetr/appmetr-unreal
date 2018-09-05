#include "AppMetrEditor.h"

#include "Modules/ModuleInterface.h"
#include "ISettingsModule.h"
#include "Modules/ModuleManager.h"

#include "AppMetrProjectSettings.h"

#define LOCTEXT_NAMESPACE "AppMetrPlugin"

void FAppMetrEditor::StartupModule()
{
    ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
    if( SettingsModule != nullptr )
    {
        SettingsModule->RegisterSettings(
                                         "Project", "Plugins", "AppMetr",
                                         LOCTEXT( "AppMetrSettingsName", "AppMetr" ),
                                         LOCTEXT( "AppMetrSettingsDescription", "AppMetr settings" ),
                                         GetMutableDefault< UAppMetrProjectSettings >()
                                         );
    }
}

void FAppMetrEditor::ShutdownModule()
{
    ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
    if( SettingsModule != nullptr )
    {
        SettingsModule->UnregisterSettings( "Project", "Plugins", "AppMetr" );
    }
}

IMPLEMENT_MODULE(FAppMetrEditor, AppMetrEditor)

#undef LOCTEXT_NAMESPACE
