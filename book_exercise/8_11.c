#include <stdio.h>
#define N 8
void cal(int mat[][N], int n);
void diaplay(int mat[][N], int n);
int main()
{
    int mat[N][N] = {0};
    cal(mat, N);
    diaplay(mat, N);
    return 0;
}
//计算杨辉三角
void cal(int mat[][N], int n)
{
    int i, j;
    for (i = 1; i < n;i++)
    {
        for (j = 1; j < n;j++)
        {
            if(i >= j)
                if(i == 1 && j == 1)
                    mat[i][j] = 1;
                else
                    mat[i][j] = mat[i - 1][j] + mat[i - 1][j - 1];
        }
    }
}
//打印杨辉三角矩阵
void diaplay(int mat[][N], int n)
{
    int i, j;
    for (i = 1; i < n;i++)
    {
        for (j = 1; j < n;j++)
        {
            if(i >= j)
                printf("%-4d", mat[i][j]);
            else
                printf("    ");
        }
        printf("\n");
    }
}