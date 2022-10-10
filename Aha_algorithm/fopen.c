#include <stdio.h>
int a[1000];
void quicksort(int left,int right)
{
    if(left > right)
        return;
    int i = left,j = right,temp;
    temp = a[left];

    while(i != j){
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
    FILE * fpin = fopen("in.txt","r");
    if (fpin == NULL)
        return 0;
    FILE * fpout = fopen("out.txt","w");
    int n = 0;
    while(fscanf(fpin,"%d",&a[n]) != EOF)
        n++;
    fclose(fpin); 
    int i = 0;
    quicksort(0,n - 1);
    for(i = 0;i <= n - 1;i++)
        fprintf(fpout,"%d ",a[i]);
    fclose(fpout);
    return 0;
    getchar();
}  