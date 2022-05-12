#include "logger.h"


void displayOnConsole(char *message)
{
    printf("%s", message);
}

boolean isInRange(float lowerLimit, float upperLimit, float number)
{
    return (lowerLimit < number && number < upperLimit);
}