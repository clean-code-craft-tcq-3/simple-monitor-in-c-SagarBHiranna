#ifndef SOCMONITOR_H
#define SOCMONITOR_H

#include "logger.h"

#define MIN_STATEOFCHARGE 20.0
#define MAX_STATEOFCHARGE 80.0
#define LOW_STATEOFCHARGE_WARNING 25.0
#define HIGH_STATEOFCHARGE_WARNING 75.0
#define LOW_STATEOFCHARGE_BREACH 0.0
#define HIGH_STATEOFCHARGE_BREACH 80.0

boolean isSocOk(float soc);

boolean isSOCInLowLimit(float soc);

boolean isSOCInHighLimit(float soc);

#endif