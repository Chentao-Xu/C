#include <stdio.h>
int main()
{
    int a;
    int *pa = &a;
    printf("%p\n%d", a,sizeof(pa));
    return 0;
}