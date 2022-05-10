#include "logger.h"

#define false 0
#define true 1

void displayOnConsole(char *message)
{
    printf("%s", message);
}

int logResult(boolean tempStatus, boolean socStatus, boolean chargeRateStatus)
{
  if ((tempStatus &&socStatus && chargeRateStatus) == false)
  {
    return 0;
  }

  return 1 ;

}