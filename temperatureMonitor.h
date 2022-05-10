#ifndef TEMPMONITOR_H
#define TEMPMONITOR_H

#include "logger.h"

#define MIN_TEMPERATURE 0.0
#define MAX_TEMPERATURE 45.0

boolean isTemperatureOk(float temperature);

#endif