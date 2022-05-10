#ifndef CRMONITOR_H
#define CRMONITOR_H

#include "logger.h"

#define MAX_CHARGERATE 0.8
#define LOW_CHARGERATE_WARNING 0.25
#define HIGH_CHARGERATE_WARNING 0.75
#define LOW_CHARGERATE_BREACH 0.0
#define HIGH_CHARGERATE_BREACH 0.8

boolean isChargeRateOk(float chargeRate);

boolean isChargeRateInLowLimit(float soc);

boolean isChargeRateInHighLimit(float soc);


#endif