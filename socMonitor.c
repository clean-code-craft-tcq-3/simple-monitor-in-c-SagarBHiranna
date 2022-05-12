#include "socMonitor.h"

boolean isSocOk(float soc)
{
	return(isInRange(MIN_STATEOFCHARGE, MAX_STATEOFCHARGE, soc));
}

boolean isSOCApproachingLowLimit(float soc)
{
	return(isInRange(LOW_STATEOFCHARGE_BREACH, LOW_STATEOFCHARGE_WARNING, soc));
}

boolean isSOCApproachingHighLimit(float soc)
{
	return(isInRange(HIGH_STATEOFCHARGE_WARNING, HIGH_STATEOFCHARGE_BREACH, soc));
}