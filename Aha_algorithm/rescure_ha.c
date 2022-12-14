#include <stdio.h>
int n,m,p,q,min = 99999;
int a[51][51],book[51][51];
void dfs(int x,int y,int step)
{
    if(x == p && y == q)
    {
        if(step < min)
            min = step;
        return;
    }
    int next[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    int i,tx,ty;
    for (i = 0;i <= 3;i++)
    {
        tx = x + next[i][0];
        ty = y + next[i][1];
        if (tx < 1 || tx > n || ty < 1 || ty > n)
            continue;
        if (a[tx][ty] == 0 && book[tx][ty] == 0)
        {
            book[tx][ty] = 1;
            dfs(tx,ty,step + 1);
            book[tx][ty] = 0;
        }
    }
    return;
}
int main()
{
    int i,j,startx,starty;
    scanf("%d%d",&n,&m);
    for (i = 1;i <= n;i++)
        for (j = 1;j <= m;j++)
            scanf("%d",&a[i][j]);
    scanf("%d%d%d%d",&p,&q,&startx,&starty);
    book[startx][starty] = 1;
    dfs(startx,starty,0);
    printf("%d",min);
    return 0;
}