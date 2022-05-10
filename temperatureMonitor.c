#include "temperatureMonitor.h"
#include <stdio.h>

boolean isTemperatureOk(float temperature)
{
    if(temperature < MIN_TEMPERATURE || temperature > MAX_TEMPERATURE)
    {
        flag+=1;
        displayOnConsole("Temperature out of range!\n");
        return false ;
    }
    return true ;
}

boolean isTempInLowLimit(float temperature)
{
    if ((temperature >= LOW_TEMP_BREACH) || (temperature <= LOW_TEMP_WARNING))
	{
		return true; 
	}
	else
	{
		return false; 
	}
}

boolean isTempInHighLimit(float temperature)
{
    if ((temperature >= HIGH_TEMP_WARNING) || (temperature <= HIGH_TEMP_BREACH))
	{
		return true; 
	}
	else 
	{
		return false; 
	}
}