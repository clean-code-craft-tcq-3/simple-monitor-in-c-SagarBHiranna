#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>

#define boolean int
#define true 1
#define false 0

int flag ;


void displayOnConsole(char *message);

boolean isInRange(float lowerLimit, float upperLimit, float number);

#endif