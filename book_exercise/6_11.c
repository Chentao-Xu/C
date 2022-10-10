#include <stdio.h>
int main()
{
    int sum = 0,m = 0,n,term = 1;
    scanf("%d",&n);
    while(sum < n)
    {
        m++;
        term *= m;
        sum += term;
    }
    printf("%d",m - 1);
    return 0;
}