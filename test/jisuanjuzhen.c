#include <stdio.h>
int menu();                                                     //打印菜单
void plus(int mat1[][100], int mat2[][100], int m, int n);      //计算矩阵加法
void multi(int mat1[][100], int mat2[][100], int n);            //计算矩阵乘法
void read(int mat[][100], int m, int n);                        //读入一个m*n矩阵
void print(int mat[][100], int m, int n);                       //打印一个m*n矩阵
struct Matinfo
{
    int mat[100][100];                                          //矩阵元素
    int m;                                                      //矩阵行
    int n;                                                      //矩阵列
}
int main()
{
    int i;
    struct Matinfo m[2];
    while(1)
    {
        switch (i)
        {
        case 1:
            
            read(m[1].mat, m, n);

        default:
        }
    }
}