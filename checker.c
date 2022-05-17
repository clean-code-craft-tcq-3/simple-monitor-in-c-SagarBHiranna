#include "checker.h"

int main() {

      testParameters testInputData[10] = { 
    { 20, 'c' ,69, 0.5,true},
    { 50, 'C', 85, 0,false},
    { 22, 'f', 54, 0.7,false},
    { 68, 'F', 9, 2,false },
    { 35, 'C', 32, -4,false},
    { 43, 'c' ,24, 0.79,false},
    { 44, 'C', 23, 0.72,false},
    { 109.5, 'f', 50, 0.75,false},
    {110, 'F', 76, 2 ,false},
    { 35, 'C', 78, -4,false}
  };

      for (int testIterIndex=0; testIterIndex<10; testIterIndex++)
      {
            assert(isBatteryStateOK(testInputData[testIterIndex].temperature, testInputData[testIterIndex].tempMetrics, testInputData[testIterIndex].soc, testInputData[testIterIndex].chargeRate)==testInputData[testIterIndex].result);
      }

}
