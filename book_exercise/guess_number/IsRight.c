#include <stdio.h>
#include "IsRight.h"
//函数功能：判断两数关系并给出提示
//函数参数：guess用户猜的数，number计算机给出的数
//返回值:猜对为1否则0
int IsRight(int number,const int guess)
{
    if (guess < number)
    {
        printf("Too Small!\n");
        return 0;
    }
    else if (guess > number)
    {
        printf("Too Big!");
        return 0;
    }
    else
        return 1;
}
