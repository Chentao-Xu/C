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
                    printf("10Ԫ%d��,5Ԫ%d��,1Ԫ%d��\n",a,b,c);
                    n++;
                }
            
        }
    }
    printf("�ܹ�%d�ַ���",n);
    return 0;
}