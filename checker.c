#include <assert.h>
#include "temperatureMonitor.h"
#include "chargeRateMonitor.h"
#include "socMonitor.h"

int batteryIsOk(float temperature, float soc, float chargeRate) {
  boolean tempStatus = isTemperatureOk(temperature);
  boolean socStatus = isSocOk(soc);
  boolean chargeRateStatus = isChargeRateOk(chargeRate);

  if (tempStatus == false || socStatus == false || chargeRateStatus == false)
  {
    return 0;
  }

  return 1 ;
}

int main() {

  assert(batteryIsOk(25.0, 70.0, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
