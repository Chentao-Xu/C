#include <stdio.h>
#include <string.h>
int main()
{
    char a[101],s[101];
    int len,i,top = 0;
    gets(a);
    //scanf("%s",&a);
    len = strlen(a);
    int mid = len/2 -1;
    for(i = 0;i <= mid;i++)
    {
        s[++top] = a[i];
    }
    for(i = len - mid - 1;i <= len;i++)
    {
        if(a[i] != s[top])
            break;
        top--;
    }
    if (top == 0)
        printf("yes");
    else 
        printf("no");
    return 0;
}