#include <stdio.h>
char c[200];
int a[200];
int sum(int n)
{
    int s = 0,i;
    for (i = 0;i < n;i++)
    {
        s += a[i];
    }
    return s;
}
int main()
{
    int ret;
    int len = 0;
    do{
        ret = scanf("%c",&c[len]);
        len++;
    }while(ret != EOF);
    len -= 2;
    int temp;
    int j = 0,i = 0;
    do{
        if (c[j] >= '0' && c[j] <= '9')
        {
            temp = 0;
            do{
                temp = temp * 10 + c[j] - 48;
                j++;
            }while(c[j] < '0' || c[j] > '9');
            a[i] = temp;
            i++;
        }
        else    
            j++;
    }while(j < len);
    for (i = 0;i < len;i++)
    {
        printf("%d\n",sum(a[i]));
    }
    return 0;
}