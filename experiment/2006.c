#include <stdio.h>
#include <stdlib.h>

int months[2][13] = {
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
    { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};

int isrun(int year)    //判断闰年
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int year_first_day(int year)  //每年的第一天是星期几
{
    int startyear = 1900;
    int firstday = 1;
    int sum = 0;
    for (int i = startyear; i < year; i++) {
        sum += 365 + isrun(i);
    }

    return (sum + firstday) % 7;
}

int month_first_day(int year, int month, int first_year)    //用户输入的年份
{
    int sum = 0;

    for (int i = 1; i<month; i++) {
        sum += months[isrun(year)][i];
    }
    sum += first_year;

    return sum % 7;
}

int main(int argc, char *argv[])
{
    int year, month;
    scanf("%d %d", &year, &month);

    int first_year = year_first_day(year);
    int first_month = month_first_day(year, month, first_year);

    printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
    for (int i = 0; i < first_month; i++)
        printf("\t");
    for (int i = 1; i <= months[isrun(year)][month]; i++) {
        printf("%d\t", i);
        if ((i + first_month) % 7 == 0)
            printf("\n");
    }
    return 0;
}