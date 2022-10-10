#include <stdio.h>
//递归
int Age(int n)
{
    if (n == 1)
        return 10;
    else
        return Age(n - 1) + 2;
}
int main()
{
    int i;
    for(i = 1; i <= 5;i++)
    {
        printf("%d ", Age(i));
    }
    return 0;
}