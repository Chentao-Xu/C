#include <stdio.h>
int main()
{
    double num = 1;
    int last_num = 1;
    do
    {
        num = last_num;
        num = num * 5 + 1;
        for (int i = 1;i <= 4;i++)
            num = num * 1.25 + 1;
        last_num++;
    }while((int)num != num);
    printf("%0.lf", num);
}