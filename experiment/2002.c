#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d/%d,%d/%d",&a,&b,&c,&d);
    printf("%d/%d",a,b);
    int delta = (a * d) - (b * c);
    if (delta == 0)
        printf(" = ");
    else if (delta > 0)
        printf(" > ");
    else
        printf(" < ");
    printf("%d/%d",c,d);
    return 0;
}