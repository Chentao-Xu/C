#include "IsValid.h"
int IsValid(int number)
{
    if (number >= MIN_NUMBER && number <= MAX_NUMBER)
        return 1;
    else
        return 0;
}