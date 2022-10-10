#include <stdio.h>
#include "MakeNumber.h"
int Makenumber(void)
{
    int number;
    number = (rand() % (MAX_NUMBER - MIN_NUMBER + 1) + MIN_NUMBER);
    return number;
}