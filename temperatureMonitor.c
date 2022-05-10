#include "temperatureMonitor.h"
#include <stdio.h>

boolean isTemperatureOk(float temperature)
{
    if(temperature < MIN_TEMPERATURE || temperature > MAX_TEMPERATURE)
    {
        flag+=1;
        return false ;
    }
    return true ;
}