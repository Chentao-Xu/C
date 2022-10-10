#include <stdio.h>

long long Pell(int n)
{
    static long long a[10001] = {0,1,2};

    if (a[n] != 0)
        return a[n];
    else
    {
        a[n] = Pell(n - 1) * 2 + Pell(n - 2);
        return a[n];
    }
}

int main()
{
    int times,n,i;
    scanf("%d",&times);

    for (i = 0;i < times;i++)
    {
        scanf("%d",&n);
        printf("%I64d\n",Pell(n));
    }

    return 0;
}