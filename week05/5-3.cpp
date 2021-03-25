#include <stdio.h>
int main()
{
    char a[10]="decline",b[10]={'p','r','o','p','e','r','\0'};
    printf("%s\n%s\n", a, b);
    char c[]="majority它在雙引號裡宣告會自動補零",d[]={'m','a','j','o','r','i','t','y'};
    printf("%s\n壞掉的d:%s\n", c, d);
}
