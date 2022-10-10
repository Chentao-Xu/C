#include <stdio.h>
#define N 40
//读入成绩
int ReadScore(int score[])
{
    int i = -1;
    do
    {
        i++;
        printf("Input score:");
        scanf("%d", &score[i]);
    } while (score[i] >= 0);
    return i;
}
//计算平均成绩
int Average(int score[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n;i++)
    {
        sum += score[i];
    }
    return n > 0 ? sum / n : -1;
}
//找出比average大的数的个数
int Higher(int score[],int n,int average)
{
    int sum = 0,i;
    for (i = 0; i < n;i++)
    {
        if(score[i] >= average)
            sum++;
    }
    return sum;
}
int main()
{
    int score[N], n;
    n = ReadScore(score);
    printf("Average:%d\n", Average(score, n));
    printf("Students higher than average:%d", Higher(score, n, Average(score, n)));
    return 0;
}
