#include <stdio.h>
int run(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}

int main()
{
    int year,month,day;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("请输入日期（年，月，日）%d,%d,%d",&year,&month,&day);
    int i,sum = 0;
    for (i = 1;i < month;i ++)
        sum += a[i - 1];
    if (run(year) == 1 && month >=3)
        sum += day + 1;
    else 
        sum += day;
    printf("%d月%d日是%d年的第%d天。",month,day,year,sum);
    return 0;
}