#include "socMonitor.h"

boolean isSocOk(float soc)
{
    if(soc < MIN_STATEOFCHARGE || soc > MAX_STATEOFCHARGE) 
    {
        flag+=1;
        displayOnConsole("State of Charge out of range!\n");
        return false;
    }
        return true;
}

boolean isSOCInLowLimit(float temperature)
{
    if ((temperature >= LOW_STATEOFCHARGE_BREACH) || (temperature <= LOW_STATEOFCHARGE_WARNING))
	{
		return true; 
	}
	else
	{
		return false; 
	}
}

boolean isSOCInHighLimit(float temperature)
{
    if ((temperature >= HIGH_STATEOFCHARGE_WARNING) || (temperature <= HIGH_STATEOFCHARGE_BREACH))
	{
		return true; 
	}
	else 
	{
		return false; 
	}
}