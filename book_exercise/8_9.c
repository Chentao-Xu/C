#include <stdio.h>
int Mat_sum(int Mat[][100], int n);
int main()
{
    int Mat[100][100],n;
    scanf("%d", &n);
    printf("%d", Mat_sum(Mat, n));
    return 0;
}
//计算矩阵对角线和
int Mat_sum(int Mat[][100],int n)
{
    int i, j, sum = 0;
    for (i = 0; i < n;i++)
    {
        for (j = 0; j < n;j++)
        {
            scanf("%d", &Mat[i][j]);
            if (i == j)
            {
                sum += Mat[i][j];
            }
        }
    }
    return sum;
}