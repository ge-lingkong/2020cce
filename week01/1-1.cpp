#include <stdio.h>
int main()
{
	int a,b,c,e,f;
	scanf("%d%d", &a, &b);
	e=a,f=b;
	while(a%b)
	{
		c=a%b;
		a=b;
		b=c;
	}
	printf("%d %d\n", e/c, f/c);
}
