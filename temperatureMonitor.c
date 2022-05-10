#include "temperatureMonitor.h"
#include <stdio.h>

boolean isTemperatureOk(float temperature)
{
    if(temperature < MIN_TEMPERATURE || temperature > MAX_TEMPERATURE)
    {
        return false ;
    }
    return true ;
}