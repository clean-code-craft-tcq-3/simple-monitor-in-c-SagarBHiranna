#include "chargeRateMonitor.h"

boolean isChargeRateOk(float chargeRate)
{
    if(chargeRate > MAX_CHARGERATE)
    {
        flag+=1;
        return false;
    }
    return true;
}