#include <stdio.h>
int hannuota(int n) 
{
    if(n == 1)
        return 1;
    return hannuota(n - 1) * 2 + 1; 
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",hannuota(n));return 0;
}