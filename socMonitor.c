#include "socMonitor.h"

boolean isSocOk(float soc)
{
    if(soc < MIN_STATEOFCHARGE || soc > MAX_STATEOFCHARGE) 
    {
        return false;
    }
        return true;
}