#include <stdio.h>
int main()
{
    int e[51][51],book[10],que[101];
    int num,way_num,i,j;
    scanf("%d%d",&num,&way_num);
    for (i = 1;i <= num;i++)
        for (j = 1;j <= num;j++)
        {
            if (i == j)
                e[i][j] = 0;
            else
                e[i][j] = 99999999;
        }

    int a,b;
    for (i = 1;i <= way_num;i++)
    {
        scanf("%d%d",&a,&b);
        e[a][b] = 1;
        e[b][a] = 1;
    }
    
    int head = 1,tail = 2;
    que[head] = 1;
    book[1] = 1;
    while(head < tail && tail <= num)
    {
        int cur = que[head];
        for (i = 1;i <= num;i++)
        {
            if (book[i] == 0 && e[cur][i] == 1)

        }
    }
}`