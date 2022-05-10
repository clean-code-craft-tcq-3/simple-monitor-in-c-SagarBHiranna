#include "temperatureMonitor.h"

boolean isTemperatureOk(float temperature)
{
    if(temperature < MIN_TEMPERATURE || temperature > MAX_TEMPERATURE)
    {
        displayOnConsole("Temperature out of range!\n");
        return false ;
    }
    return true ;
}