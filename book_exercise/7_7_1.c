#include <stdio.h>
int Gcd(int a,int b)
{
    int min = a < b ? a : b;
    int i = min - 1;
    do
    {
        i--;
    } while (a % i + b % i != 0 && i > 0);
    return i;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", Gcd(a, b));
    return 0;
}