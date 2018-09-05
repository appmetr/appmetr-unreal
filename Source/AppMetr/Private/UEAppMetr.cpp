#include "UEAppMetr.h"
#include "AppMetr.h"

DEFINE_LOG_CATEGORY_STATIC(LogAppMetr, Display, All);
IMPLEMENT_MODULE( FAppMetr, AppMetr )

void FAppMetr::StartupModule()
{
	UE_LOG(LogAppMetr, Display, TEXT("FAppMetr Constructor"));
}

void FAppMetr::ShutdownModule()
{
}
