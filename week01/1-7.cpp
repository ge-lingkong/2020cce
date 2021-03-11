#include <stdio.h>
int main()
{
	int a,b=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d", &a);
		if(a%3==0)
			b++;
	}
	printf("%d\n", b);
}
