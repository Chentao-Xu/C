#include <stdio.h>
#include <math.h>
int main()
{
    long long max = 0,min = 0;
    int n,i;
    scanf("%d",&n);
    for (i = 1;i <= n;i ++){
        max += i * pow(10,i - 1); 
        min += i * pow(10,n - i);//计算边界如1234，4321
    }
    for (i = min;i <= max;i++)//i取遍可能的所有数如1234~4321
    {
        int a[101],t = 0,num = i,j;
        for (j = 0;j < n;j++){
            a[t] = num % 10;
            num = num / 10;
            t++;
        }//取出i每位上的数字存入数组a[]
        int b[10] = {0},sum = 0;//数组b初值为零
        for (j = 0;j < n;j++){
            if (a[j] <= n && a[j] > 0)
                b[a[j]] = 1;//如果数字i出现一次就将b[i]赋值1
        }
        for (j = 1;j <= n;j++)
           sum += b[j]; //数组b求和
        if (sum == n){
            printf("%d\n",i);//如果1~4都出现过并且没重复就输出这个数
        }
    }
    return 0;
}