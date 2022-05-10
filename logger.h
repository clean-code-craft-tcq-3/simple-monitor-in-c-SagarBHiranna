#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>

typedef enum {false, true} boolean;

void displayOnConsole(char *message);

int logResult(boolean tempStatus, boolean socStatus, boolean chargeRateStatus);

#endif