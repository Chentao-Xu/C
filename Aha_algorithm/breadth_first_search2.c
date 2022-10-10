#include <stdio.h>
char  a[21][21];
int book[21][21] = {0};
int startx,starty,m,n,i,j,head,tail,tx,ty;
int num(int x,int y)
{
    int t = 0,i,j;
    i = x;j = y;
    while (i >= 0 && i < m && j >= 0 && j < n)
    {
        if(a[i][j] == '1')
            t++;
        i++;
    }
    i = x;j = y;
    while (i >= 0 && i < m && j >= 0 && j < n)
    {
        if(a[i][j] == '1')
            t++;
        i--;
    }
    i = x;j = y;
    while (i >= 0 && i < m && j >= 0 && j < n)
    {
        if(a[i][j] == '1')
            t++;
        j++;
    } 
    i = x;j = y;
    while (i >= 0 && i < m && j >= 0 && j < n)
    {
        if(a[i][j] == '1')
            t++;
        j--;
    }
    return t;
}
struct note{
    int x;
    int y;
};
int main()
{
    struct note que[401];
    scanf("%d%d",&m,&n);
    for (i = 0;i < m;i++)
            scanf("%s",a[i]);
    scanf("%d%d",&startx,&starty);
    
    book[startx][starty] = 1;
    head = 1;
    tail = 1;
    que[tail].x = startx;
    que[tail].y = starty;
    tail++;

    int way[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    while (head < tail)
    {
        for (i = 0;i <= 3;i++)
        {
            tx = que[head].x + way[i][0];
            ty = que[head].y + way[i][1];

            if (tx < 0 || tx > m - 1 || ty < 0 || ty > n - 1)
                continue;
            
            if (a[tx][ty] == '0' && book[tx][ty] == 0)
            {
                book[tx][ty] = 1;
                que[tail].x = tx;
                que[tail].y = ty;
                tail++;
            }
        }
        head++;
    }
    int max = 0,now,index = 1;
    for (i = 1;i < tail;i++)
    {
        now = num(que[i].x,que[i].y);
        if (now > max)
        {
            max = now;
            index = i;
        }
    }  
    printf("%d %d %d",que[index].x,que[index].y,max);
    return 0;
}