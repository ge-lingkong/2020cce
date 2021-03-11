#include <stdio.h>
int MYPOWER(int a, int b)
{
	int c=1;
	for(int i=0;i<b;i++)
		c*=a;
	return c;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
