#include <stdio.h>
#include <math.h>
int Gcd(int a,int b)
{
    if (a == b)
        return a;
    else
        return Gcd(fmin(a, b), fabs(a - b));
}
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    printf("%d", Gcd(a, b));
    return 0;
}