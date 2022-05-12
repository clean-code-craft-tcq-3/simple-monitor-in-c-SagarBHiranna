#ifndef TEMPMONITOR_H
#define TEMPMONITOR_H

#include "logger.h"

#define MIN_TEMPERATURE 0.0
#define MAX_TEMPERATURE 45.0
#define LOW_TEMP_WARNING 5.0
#define HIGH_TEMP_WARNING 40.0
#define LOW_TEMP_BREACH 0.0
#define HIGH_TEMP_BREACH 45.0

boolean isTemperatureOk(float temperature);

boolean isTempApproachingLowLimit(float temperature);

boolean isTempApproachingHighLimit(float temperature);

#endif