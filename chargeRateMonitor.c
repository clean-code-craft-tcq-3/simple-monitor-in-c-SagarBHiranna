#include "chargeRateMonitor.h"

boolean isChargeRateOk(float chargeRate)
{
	return(isInRange(LOW_CHARGERATE_BREACH, MAX_CHARGERATE, chargeRate));
}

boolean isChargeRateApproachingLowLimit(float chargeRate)
{
	return(isInRange(LOW_CHARGERATE_BREACH, LOW_CHARGERATE_WARNING, chargeRate));
}

boolean isChargeRateApproachingHighLimit(float chargeRate)
{
	return(isInRange(HIGH_CHARGERATE_WARNING, HIGH_CHARGERATE_BREACH, chargeRate));
}