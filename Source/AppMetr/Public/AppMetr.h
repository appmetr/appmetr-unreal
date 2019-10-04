#pragma once

#include "UObject/Object.h"
#include "AppMetr.generated.h"

UCLASS()
class APPMETR_API UAppMetr : public UObject
{
    GENERATED_UCLASS_BODY()

public:
	static void attachProperties();
	static void attachProperties(FString properties);

	static void trackSession();
	static void trackSession(FString properties);

	static void trackEvent(FString event);
	static void trackEvent(FString event, FString properties);

	static void trackPayment(FString payment);
	static void trackPayment(FString payment, FString properties);

	static void flush();
	static void flushLocal();


	static void trackState(FString state);

	static void identify(FString userId);
};
