#include <stdio.h>
int a[100];
void bubblesort(int left,int right)
{
    int i,j,t;
    /*for(i = left;i < right;i++){
        for(j = right;j > i;j--)
            if(a[j] < a[j - 1]){
                t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
            }
    }从后往前*/
    for(i = left;i < right;i ++){//从前往后
        for(j = left;j < right - (i - left);j++){
            if(a[j] > a[j + 1]){
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}
int main()
{
    int i,j,t,n;
    scanf("%d",&n);
    for(i = 0;i < n;i ++)
        scanf("%d",&a[i]);
    bubblesort(0,n-1);
    for(i = 0;i < n;i++)
        printf("%d ",a[i]);
    return 0;
}