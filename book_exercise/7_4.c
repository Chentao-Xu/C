#include <stdio.h>
int LCM(int a,int b)
{
    int i = 2;
    do
    {
        i++;
    } while (a * i % b != 0);
    return a * i;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", LCM(a, b));
}