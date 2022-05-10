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