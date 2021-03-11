#include <stdio.h>
int main()
{
	int a[11],b=0;
	while(1)
	{
		scanf("%d", &a[b]);
		if(a[b]==0)
			break;
		b++;
	}
	for(int i=b-1;i>=0;i--)
		printf("%d ", a[i]);
	printf("\n");
}
