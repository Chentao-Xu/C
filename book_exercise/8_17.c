#include <stdio.h>
void multi(int num[], int multi_num);
void Output(int num[]);
int main()
{
    int num[50] = {0}, i;
    num[49] = 1;
    for (i = 1; i <= 40;i++)
    {
        multi(num, i);
        printf("%d!=", i);
        Output(num);
    }
    return 0;
}
//计算数组乘法
void multi(int num[], int multi_num)
{
    int i;
    static int temp = 0;
    for (i = 49; i > 0;i--)
    {
        temp = num[i] * multi_num + temp;
        num[i] = temp % 10;
        temp = temp / 10;
    }
}
//去掉开头的零，并输出数组
void Output(int num[])
{
    int i = 0;
    while(num[i] == 0)
        i++;
    for (; i <= 49;i++)
    {
        printf("%d", num[i]);
    }
    printf("\n");
}
