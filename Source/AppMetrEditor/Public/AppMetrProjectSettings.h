#pragma once

#include "AppMetrProjectSettings.generated.h"

UCLASS(config=Engine, defaultconfig)
class UAppMetrProjectSettings : public UObject
{
    GENERATED_UCLASS_BODY()

public:
    UPROPERTY(Config, EditAnywhere, Category=IosSetup, Meta=(ToolTip="AppMetr Token Key"))
    FString AppMetrKey;
};
