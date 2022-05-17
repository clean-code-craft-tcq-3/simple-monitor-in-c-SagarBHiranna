#ifndef HEALTH_MONITOR_H
#define HEALTH_MONITOR_H

#include<stdio.h>
#include<stdbool.h>

#define TOLERANCE_LIMIT 0.05
#define MIN_STATEOFCHARGE 20.0
#define MAX_STATEOFCHARGE 80.0
#define MIN_TEMPERATURE 0.0
#define MAX_TEMPERATURE 45.0
#define MAX_CHARGERATE 0.8
#define MIN_CHARGERATE 0.2

#define DISPLAY_MESSAGE_LANG_ID  2

typedef struct{
  int LowBreach;
  int highWarning;
  int lowWarning;
  int HighBreach;
}ParameterStatus;




ParameterStatus checkBatteryHealthCondition(float healthParameter, float maxLimit, float minLimit);

int checkUpperThresholdBreach(float maxLimit, float healthParameter);

int checkLowerThresholdBreach(float minLimit, float healthParameter);

int checkForWarningLevel(float minWarningLimit, float maxWarningLimit, float healthParameter);

void displayOnConsole(char *message);

bool isBatteryStateOK(float temperature, char tempMetrics, float soc, float chargeRate);

#endif