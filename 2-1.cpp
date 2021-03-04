#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);
    int *p=&n[0],*p2=&n[2];
    *p=40;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);
    *p2=50;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);
    p2=p;
    *p2=60;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);
}
