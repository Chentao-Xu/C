#include <stdio.h>

int fun(void){
    static int count = 10;    // 事实上此赋值语句从来没有执行过
    return count--;
}

int count;

int main(void)
{    
    printf("global\t\tlocal static\n");
    for(count = 1; count <= 10; ++count)
        printf("%d\t\t%d\n", count, fun());    
   
    return 0;
}