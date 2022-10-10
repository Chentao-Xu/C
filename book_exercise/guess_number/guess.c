#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "guess.h"
int main()
{
    int number;
    char reply;
    srand(time(NULL));
    do
    {
        number = MakeNumber();
        GuessNumber(number);
        printf("Do you want to continue?");
        scanf("%c",&reply);
    } while (reply == 'Y' || reply == 'y');
    return 0;
}