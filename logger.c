#include "logger.h"

void displayOnConsole(char *message)
{
    printf("%s", message);
}

int logResult(boolean tempStatus, boolean socStatus, boolean chargeRateStatus)
{
  if (tempStatus == false || socStatus == false || chargeRateStatus == false)
  {
    return 0;
  }

  return 1 ;

}