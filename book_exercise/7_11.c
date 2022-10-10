#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int Now_num = 1;
//生成随机数0，1
int MakeNum()
{
    srand(time(NULL));
    return rand() % 2;
}
//人类的回合
int Human()
{
    int num = 0, t = 0;
    printf("Human:");
    while (scanf("%d",&num))
    {
        if (num == Now_num + t && t < 2)
            t++;
        else
            return -1;
        //数字之后是回车则输入结束
        if(getchar() == '\n')
            break;
    }
    if(Now_num + t == 31)
        printf("You win!");
    return t;
}
//电脑的回合（赢不了电脑QAQ）
void Computer()
{
    int rest = 30 - Now_num + 1;
    if(rest % 3 == 1)
    {
        printf("Computer:%d\n",Now_num);
        Now_num++;
    }
    else if(rest % 3 == 2)
    {
        printf("Computer:%d %d\n", Now_num, Now_num + 1);
        Now_num += 2;
    }
    else
    {
        if (MakeNum == 0)
        {
            printf("Computer:%d\n",Now_num);
            Now_num++;
        }
        else
        {
            printf("Computer:%d %d\n", Now_num, Now_num + 1);
            Now_num += 2;
        }
    }
    if (Now_num >= 30)
        printf("Computer win!");
}
int main()
{
    int Human_back = 0;
    int ran = MakeNum();
    if(ran == 0)
    {
       do
       {
           Computer();
           if(Now_num >= 30)
               break;
           while ((Human_back = Human()) <= 0)//返回值为0或-1则为非法输入
            {
                printf("Try again!\n");
                //非法输入！清除缓存区
                while (getchar() != '\n');
            }
           Now_num += Human_back;
       } while (Now_num < 30);
    }
    else
    {
        do
       {
            while ((Human_back = Human()) <= 0)
            {
                printf("Try again!\n");
                //非法输入
                while (getchar() != '\n');
            }
           Now_num += Human_back;
           if(Now_num >= 30)
               break;
           Computer();
       } while (Now_num < 30);
    }
    return 0;
}