#include <stdio.h>
#define len 10
int Find(int a[], int x);
void Move(int a[], int place);
int main()
{
    int a[11] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 0}, i, x;

    printf("²åÈëµÄÊý:\n");
    scanf("%d", &x);

    int place = Find(a, x);
    Move(a, place);
    a[place] = x;

    for (i = 0; i < len + 1;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
int Find(int a[],int x)
{
    int i;
    for (i = 0; i < len;i++)
    {
        if(a[i] > x)
            return i;
    }
    return i;
}
void Move(int a[], int place)
{
    int i;
    for (i = len; i > place;i--)
    {
        a[i] = a[i - 1];
    }
}