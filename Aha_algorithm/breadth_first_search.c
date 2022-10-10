#include <stdio.h>
struct note
{
    int x;//横坐标
    int y;//纵坐标
    int s;//步数
};
int main()
{
    struct note que[2501];
    int a[51][51] = {0},book[51][51] = {0};//book记录是否走过
    int next[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};//下左上右
    int head,tail;
    int p,q,startx,starty,i,j,k,n,m,tx,ty,flag;

    scanf("%d%d",&n,&m);//读入行列 
    for (i = 1;i <= n;i++)
        for (j = 1;j <= m;j++)
            scanf("%d",&a[i][j]);//读入图形
    scanf("%d%d%d%d",&startx,&starty,&p,&q);//startx，starty开始位置，p，q目标位置

    head = 1;
    tail = 1;//队列初始化位空
    que[tail].x = startx;
    que[tail].y = starty;
    que[tail].s = 0;//存入开始位置，步数为零
    tail++;//队列长度加一
    book[startx][starty] = 1;

    flag = 0;//flag标记是否找到
    
    while(head < tail)//队列不为空
    {
        for(k = 0;k < 3;k++)//尝试四个方向
        {
            tx = que[head].x + next[k][0];
            ty = que[head].y + next[k][1];
            
            if(tx < 1 || tx > n || ty < 1 || ty > m)//判断是否出界
                continue;//出界跳过
            if(a[tx][ty] == 0 && book[tx][ty] == 0)//未走过且无障碍
            {
                book[tx][ty] = 1;
                que[tail].x = tx;
                que[tail].y = ty;//存入队列
                que[tail].s = que[head].s + 1;//步数加一
                tail ++;//队列长度加一
            }
            if(tx == p && ty == q)//找到
            {
                flag = 1;//标记
                break;//跳出for循环
            }
        }
        if(flag == 1)//找到
            break;//跳出while循环
        head++;//探索下一个点
    }
    
    if(!flag)    
        printf("no");//未找到
    else
        printf("%d",que[tail - 1].s);//注意tail位置是空的
    return 0;
}