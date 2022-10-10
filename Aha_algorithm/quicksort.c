#include <stdio.h>
int a[100],n;
void quicksort(int left,int right)
{
    if(left > right)
        return;
    int i = left,j = right,temp;
    temp = a[left];

    while(i != j){//left < right?
        while(a[j] >= temp && i < j)
            j--;
        while(a[i] <= temp && i < j)
            i++;
        if(i < j){
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    a[left] = a[i];
    a[i] = temp;
    quicksort(left,i - 1);
    quicksort(i + 1,right);
    return;
}
int main()
{
    int i,j;
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
        scanf("%d",&a[i]);
    quicksort(1,n);
    for(i = 1;i <= n;i++)
        printf("%d ",a[i]);
    return 0;
}