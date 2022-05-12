#include "testPackage.h"
#include "logger.h"

boolean isBatteryStateOK(float temperature, float soc, float chargeRate)
{
    boolean crLowLimit =  isChargeRateApproachingLowLimit( chargeRate);
    boolean crHighLimit = isChargeRateApproachingHighLimit( chargeRate);
    boolean crInLimit = isChargeRateOk( chargeRate);
    reportCRData( crLowLimit,  crHighLimit,  crInLimit);

    boolean tempInLimit = isTemperatureOk( temperature);
    boolean tempLowLimit = isTempApproachingLowLimit( temperature);
    boolean tempHighLimit = isTempApproachingHighLimit( temperature);  
    reportTempData(tempLowLimit, tempHighLimit, tempInLimit);

    boolean socInLimit = isSocOk( soc);
    boolean socLowLimit = isSOCApproachingLowLimit( soc);
    boolean socHighLimit = isSOCApproachingHighLimit( soc);
    reportSOCData(socLowLimit,  socHighLimit,  socInLimit);

    if((crInLimit+tempInLimit+socInLimit)==3){return 1;}
    else {return 0;}
}

void reportCRData(boolean crLowLimit, boolean crHighLimit, boolean crInLimit)
{
    if ((crLowLimit+crHighLimit)==1)
    {
        displayOnConsole("CR Limit in WARNING RANGE !!!! \n");
    }
    if ((crInLimit==0))
    {
        displayOnConsole("Charge Rate Out Of Range !!!!\n");
    }
    if((crLowLimit+crHighLimit+crInLimit)==3)
    {
        displayOnConsole("Charge Rate is fine !!!!\n");
    }
}


void reportTempData(boolean tempLowLimit, boolean tempHighLimit, boolean tempInLimit)
{
    if ((tempLowLimit+tempHighLimit)==1)
    {
        displayOnConsole("Temp Limit in WARNING RANGE !!!! \n");
    }
    if ((tempInLimit==0))
    {
        displayOnConsole("Temp Out Of Range !!!!\n");
    }
    if((tempLowLimit+tempHighLimit+tempInLimit)==3)
    {
        displayOnConsole("Temp is fine !!!!\n");
    }
}

void reportSOCData(boolean socLowLimit, boolean socHighLimit, boolean socInLimit)
{
    if ((socLowLimit+socHighLimit)==1)
    {
        displayOnConsole("SOC Limit in WARNING RANGE !!!! \n");
    }
    if ((socInLimit==0))
    {
        displayOnConsole("SOC Out Of Range !!!!\n");
    }   
    if((socLowLimit+socHighLimit+socInLimit)==3)
    {
        displayOnConsole("SOC is fine !!!!\n");
    } 
}