#include <stdio.h>
#include <stdlib.h>

int months[2][13] = {
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },    //非闰12个月
    { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }     //闰12个月
};

int isRun(int year)    //判断闰年
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int first_day_of_year(int year)  //首先定义一个基准年
{
    int base_year = 1900;
    int base_first_day = 1;
    int total = 0;
    for (int i = base_year; i<year; i++) {
        total += 365 + isRun(i);
    }

    return (total + base_first_day) % 7;
}

int first_day_of_month(int year, int month, int first_year)    //用户输入的年份
{
    int total = 0;

    for (int i = 1; i<month; i++) {
        total += months[isRun(year)][i];
    }
    total += first_year;

    return total % 7;
}

void putout(int year, int month, int first)
{
    printf("Sun Mon Tue Wed The Fri Sat\n");
    for (int i = 0; i<first; i++)
        printf("    ");
    for (int i = 1; i <= months[isRun(year)][month]; i++) {
        printf("%3d ", i);
        if ((i + first) % 7 == 0)
            printf("\n");
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    int year, month;
    printf("year/month: ");
    scanf("%d %d", &year, &month);

    int first_year = first_day_of_year(year);
    int first_month = first_day_of_month(year, month, first_year);
    putout(year, month, first_month);
    return 0;
}
