#include <stdio.h>
int prime(int n)
{
    int i;
    for (i = 2;i < n;i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int round,num;
    int i,j,n;
    scanf("%d",&round);
    for (i = 1;i <= round;i++)
    {
        int sum = 0;
        scanf("%d",&num);
        for (j = 1;j <= num;j++)
        {
            scanf("%d",&n);
            if (prime(n) == 1)
                sum += n;
        }
        printf("%d\n",sum);
    }
    return 0;
}