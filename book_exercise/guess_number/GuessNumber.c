#include <stdio.h>
#include "IsRight.h"
#include "IsValid.h"
//函数功能：用户猜数字
//函数参数：number计算机生成的数
//函数返回值：无
void GuessNumber(int number)
{
    int guess;
    int count = 0;
    int right = 0;
    int ret = 0;
    do{
        printf("try%d",count + 1);
        ret = scanf("%d",&guess);
        while (ret != 1 || !IsValid(guess))
        {
            printf("error!\n");
            while (getchar() != '\n');
            printf("try%d",count + 1);
            ret = scanf("%d",&guess);
        }
        count++;
        right = IsRight(number,guess);
    }while(!right && count <= MAX_TIMES);
    if (right)
        printf("Congratulations!\n");
    else 
        printf("You failed after %d times.",count);
}