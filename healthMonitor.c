#include "healthMonitor.h"

char englishMessages[12][100] = { "Low Threshold Breached" , "Approaching Low Threshold Breach" , "Approaching High Threshold Breach" , "High Threshold Breached" };
char germanMessages[12][100] ={ "unterer Schwellenwert uberschritten" , "nahe unterem Schwellenwert uberschritten" , "nahe oberem Schwellenwert uberschritten" , "oberer Schwellenwert uberschritten" };


int checkUpperThresholdBreach(float maxLimit, float healthParameter)
{
      return(healthParameter>maxLimit);
}

int checkLowerThresholdBreach(float minLimit, float healthParameter)
{     
      return(healthParameter<minLimit);
}

int checkForWarningLevel(float minWarningLimit, float maxWarningLimit, float healthParameter)
{
      return(( healthParameter >= minWarningLimit) && (healthParameter <= maxWarningLimit ));
}

void displayOnConsole(char *message)
{
    printf("%s", message);
}

float verifyAndConvertTemperature(float temperature, char tempMetrics)
{
      if(tempMetrics == 'F'||tempMetrics == 'f'){
            return((temperature - 32) * 5 / 9);
      }
      return(temperature);
}
void alertUser(int alerterValue, int alertID)
{
      if(alerterValue)
      {
            if (DISPLAY_MESSAGE_LANG_ID == 1)
            {
                   displayOnConsole(germanMessages[alertID]);
            }
            else 
            {
                  displayOnConsole(englishMessages[alertID]);
            }
      }
}

ParameterStatus checkBatteryHealthCondition(float healthParameter, float minLimit, float maxLimit)
{
      ParameterStatus healthStatus = {0};
      healthStatus.HighBreach = checkUpperThresholdBreach(maxLimit, healthParameter);
      healthStatus.LowBreach = checkLowerThresholdBreach(minLimit, healthParameter);
      healthStatus.highWarning = checkForWarningLevel(minLimit, minLimit+(0.05*maxLimit), healthParameter);
      healthStatus.lowWarning = checkForWarningLevel(maxLimit-(0.05*maxLimit), maxLimit, healthParameter);
      return healthStatus;
      
}

int userAlerter(ParameterStatus healthStatus)
{
      if((healthStatus.HighBreach+healthStatus.LowBreach+healthStatus.highWarning+healthStatus.lowWarning) != 0)
      {
            alertUser(healthStatus.LowBreach, 0);
            alertUser(healthStatus.lowWarning, 1);
            alertUser(healthStatus.highWarning, 2);
            alertUser(healthStatus.HighBreach, 3);
            return 1;
      }
      else
      {
            displayOnConsole("This condition is good");
            return 0;
      }

}

bool isBatteryStateOK(float temperature, char tempMetrics,float soc, float chargeRate)
{
      ParameterStatus temperatureStatus = {0};
      ParameterStatus socStatus = {0};
      ParameterStatus chargeRateStatus = {0};
      float tempInCelcius = verifyAndConvertTemperature(temperature, tempMetrics);
      temperatureStatus = checkBatteryHealthCondition(tempInCelcius, MIN_TEMPERATURE, MAX_TEMPERATURE);
      displayOnConsole("\n============================\n****TEMPERATURE INFO****\n");
      int statusAlert = userAlerter(temperatureStatus);
      socStatus = checkBatteryHealthCondition(soc, MIN_STATEOFCHARGE, MAX_STATEOFCHARGE);
      displayOnConsole("\n----------------------------\n****SOC INFO****\n");
      int socAlert = userAlerter(socStatus);
      chargeRateStatus = checkBatteryHealthCondition(chargeRate, MIN_CHARGERATE, MAX_CHARGERATE);
      displayOnConsole("\n----------------------------\n****CHARGE RATE INFO****\n");
      int crAlert = userAlerter(chargeRateStatus);
      displayOnConsole("\n----------------------------\n");
      if(statusAlert+socAlert+crAlert == 0)
      {
            return true;
      }
      return false;
      
}