#include <stdio.h>
int Abs(int n)
{
    if (n >= 0)    
        return n;
    else
        return -n;
}//绝对值
int main()
{
    int n,a[4],i;
    scanf("%d",&n);
    n = Abs(n);
    for (i = 1;i < 4;i++){
        a[i] = n % 10;
        n = n / 10;
    }//取第i位并存入a[i]
    printf("%d",a[1] * 100 + a[2] * 10 + a[3]);//输出逆序数
    return 0;
}