#include "temperatureMonitor.h"
#include <stdio.h>

boolean isTemperatureOk(float temperature)
{	
	return(isInRange(MIN_TEMPERATURE, MAX_TEMPERATURE, temperature));
}

boolean isTempApproachingLowLimit(float temperature)
{
	return(isInRange(LOW_TEMP_BREACH, LOW_TEMP_WARNING, temperature));
}

boolean isTempApproachingHighLimit(float temperature)
{
	return(isInRange(HIGH_TEMP_WARNING, HIGH_TEMP_BREACH, temperature));
}