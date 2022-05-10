#include "socMonitor.h"

boolean isSocOk(float soc)
{
    if(soc < MIN_STATEOFCHARGE || soc > MAX_STATEOFCHARGE) 
    {
        displayOnConsole("State of Charge out of range!\n");
        return false;
    }
        return true;
}