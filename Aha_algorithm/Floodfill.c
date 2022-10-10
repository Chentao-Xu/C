#include <stdio.h>
int a[51][51];
int book[51][51],n,m,sum;
void dfs(int x,int y,int color)
{
    int next[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    int k,tx,ty;
    a[x][y] = color;
    for (k = 0;k < 4;k++)
    {
        tx = x + next[k][0];
        ty = y + next[k][1];

        if (!(tx > 0 && tx <= m && ty > 0 && ty <= n))
            continue;

        if (book[tx][ty] == 0 && a[tx][ty] > 0)
        {
            sum ++;
            book[tx][ty] = 1;
            dfs(tx,ty,color);
        }
    }
    return ;
};
int main()
{
    int i,j,num = 0;
    freopen("C:\\Users\\CT\\Desktop\\c\\Aha\\floodfillin.txt","r",stdin);
    scanf("%d%d",&m,&n);

    for (i = 1;i <= m;i++)
        for (j = 1;j <= n;j++)
            scanf("%d",&a[i][j]);
    
    for (i = 1;i < m;i++)
    {
        for (j = 1;j < n;j++)
        {
            if (a[i][j] > 0)
            {
                book[i][j] = 1;
                dfs(i,j,- num - 1);
                num ++;
            }
        }
    }

    for (i = 1;i <= m;i++)
    {
        for (j = 1;j <= n;j++)
            printf("%3d",a[i][j]);
        printf("\n");
    }

    printf("In total has %d islands",num);

    return 0;
}