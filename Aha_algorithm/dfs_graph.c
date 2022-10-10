#include <stdio.h>
int book[101],n,sum,e[101][101];
void dfs(int cur)
{
    int i;
    printf("%d ",cur);
    sum ++;
    if (sum == n)   return;
    for (i = 1;i <= n;i++)
    {
        if (e[cur][i] == 1 && book[i] == 0)
        {
            book[i] = 1;
            dfs(i);
        }
    }
    return;
}
int main()
{
    int t,i,x,y;
    scanf("%d%d",&n,&t);//n数字个数，t条数
    for (i = 1;i <= t;i++)
    {
        scanf("%d%d",&x,&y);
        e[x][y] = 1;
        e[y][x] = 1;
    }
    book[1] = 1;
    dfs(1);
    return 0;
}