#include "socMonitor.h"

boolean isSocOk(float soc)
{
    if(soc < MIN_STATEOFCHARGE || soc > MAX_STATEOFCHARGE) 
    {
        flag+=1;
        return false;
    }
        return true;
}