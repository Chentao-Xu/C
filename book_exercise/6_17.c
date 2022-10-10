#include <stdio.h>
int main()
{
    int a,b,c,n = 0;
    for (a = 1;a < 10;a++)
    {
        for (b = 1;b < 20;b++)
        {
                c = 50 - a - b;
                if (a *10 + b * 5 + c * 1 == 100 && c > 0)
                {
                    printf("10元%d张,5元%d张,1元%d张\n",a,b,c);
                    n++;
                }
            
        }
    }
    printf("总共%d种方法",n);
    return 0;
}