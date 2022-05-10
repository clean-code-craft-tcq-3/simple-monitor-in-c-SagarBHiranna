#include "chargeRateMonitor.h"

boolean isChargeRateOk(float chargeRate)
{
    if(chargeRate > MAX_CHARGERATE)
    {
        displayOnConsole("Charge Rate out of range!\n");
        return false;
    }
    return true;
}