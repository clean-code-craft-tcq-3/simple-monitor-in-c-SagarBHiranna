#include <assert.h>
#include "temperatureMonitor.h"
#include "chargeRateMonitor.h"
#include "socMonitor.h"
#include "testPackage.h"


int main() {

  displayOnConsole("----------------------------------\n");
  assert(isBatteryStateOK(25.0, 79.0, 0.7));
  displayOnConsole("----------------------------------\n");
  assert(isBatteryStateOK(1.0, 70.0, 0.7));
  displayOnConsole("----------------------------------\n");
  assert(isBatteryStateOK(30.0, 70.0, 0.79));
  displayOnConsole("----------------------------------\n");
  assert(isBatteryStateOK(35.0, 23.0, 0.5));
  displayOnConsole("----------------------------------\n");
  assert(!isBatteryStateOK(46.0, 82.0, 0.8));
  displayOnConsole("----------------------------------\n");
  assert(!isBatteryStateOK(50, 85, 0));
  displayOnConsole("----------------------------------\n");
}
