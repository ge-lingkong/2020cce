#include <stdio.h>
int main()
{
    char a[20]="233233233233233233";
    for(int i=0;a[i];i++)
        if(a[i]!='2')
            printf("%c", a[i]);
    printf("\n");
}
