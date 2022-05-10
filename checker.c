#include <assert.h>
#include "temperatureMonitor.h"
#include "chargeRateMonitor.h"
#include "socMonitor.h"

int batteryIsOk(float temperature, float soc, float chargeRate) {
  boolean tempStatus = isTemperatureOk(temperature);
  boolean socStatus = isSocOk(soc);
  boolean chargeRateStatus = isChargeRateOk(chargeRate);

  if (flag>0){return 0;}
  else {return 1;}
}

int main() {

  assert(batteryIsOk(25.0, 70.0, 0.7));
  assert(batteryIsOk(0.0, 70.0, 0.7));
  assert(batteryIsOk(45.0, 70.0, 0.7));
  assert(batteryIsOk(35.0, 20.0, 0.5));
  assert(!batteryIsOk(46.0, 82.0, 0.8));
  assert(!batteryIsOk(50, 85, 0));
}
