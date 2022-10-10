#include <stdio.h>
int main()
{
    int x = 3, y = 4;
    int *temp;
    temp = &x;
    *temp = y;
    printf("%d %d", x, y);
    return 0;
}