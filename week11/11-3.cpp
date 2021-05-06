#include <stdio.h>
#include <stdlib.h>
int compare(const void *a1,const void *a2)
{///轉成「整數的指標」,準星看到的是整數
    int p1=*((int*)a1);
    int p2=*((int*)a2);
    if(p1>p2)
        return 1;
    else if(p1<p2)
        return -1;
    else
        return 0;
}
int main()
{
    int a[10]={8,9,2,5,6,3,4,1,10,7};
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++)
        printf("%d ", a[i]);
}
