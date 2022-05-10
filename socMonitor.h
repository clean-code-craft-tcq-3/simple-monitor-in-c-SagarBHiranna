#ifndef SOCMONITOR_H
#define SOCMONITOR_H

#include "logger.h"

#define MIN_STATEOFCHARGE 20.0
#define MAX_STATEOFCHARGE 80.0

boolean isSocOk(float soc);

#endif