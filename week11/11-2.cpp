#include <stdio.h>
typedef struct data{
    char c;
    int a;
}DATA;
DATA b;
int main()
{
    b.c='A';
    b.a=1;
    printf("%c %d", b.c, b.a);
}
