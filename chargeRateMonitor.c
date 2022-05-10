#include "chargeRateMonitor.h"

boolean isChargeRateOk(float chargeRate)
{
    if(chargeRate > MAX_CHARGERATE)
    {
        flag+=1;
        displayOnConsole("Charge Rate out of range!\n");
        return false;
    }
    return true;
}

boolean isChargeRateInLowLimit(float temperature)
{
    if ((temperature >= LOW_CHARGERATE_BREACH) || (temperature <= LOW_CHARGERATE_WARNING))
	{
		return true; 
	}
	else
	{
		return false; 
	}
}

boolean isChargeRateInHighLimit(float temperature)
{
    if ((temperature >= HIGH_CHARGERATE_WARNING) || (temperature <= HIGH_CHARGERATE_BREACH))
	{
		return true; 
	}
	else 
	{
		return false; 
	}
}