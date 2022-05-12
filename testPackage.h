#ifndef TEST_PACKAGE_H
#define TEST_PACKAGE_H

#include "temperatureMonitor.h"
#include "chargeRateMonitor.h"
#include "socMonitor.h"

boolean isBatteryStateOK(float temperature, float soc, float chargeRate);

void reportCRData(boolean crLowLimit, boolean crHighLimit, boolean crInLimit);

void reportTempData(boolean tempLowLimit, boolean tempHighLimit, boolean tempInLimit);

void reportSOCData(boolean socLowLimit, boolean socHighLimit, boolean socInLimit);

#endif