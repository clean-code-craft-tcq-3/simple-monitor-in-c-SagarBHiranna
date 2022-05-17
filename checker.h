#ifndef CHECKER_H
#define CHECKER_H

#include<stdbool.h>
#include<assert.h>
#include"healthMonitor.h"

typedef struct
{
  float temperature;
   char tempMetrics;
   float soc;
   float chargeRate;
   bool result;
}testParameters;

#endif