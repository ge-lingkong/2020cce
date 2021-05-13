#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d", &a);
	for(int i=0;i<a;i++)
	{
		int c[50]={},d=0,t;
		scanf("%d", &b);
		for(int j=0;j<b;j++)
			scanf("%d", &c[j]);
		for(int j=0;j<b-1;j++)
			for(int k=0;k<b-1;k++)
				if(c[k]>c[k+1])
				{
					t=c[k];
					c[k]=c[k+1];
					c[k+1]=t;
					d++;
				}
		printf("Optimal train swapping takes %d swaps.\n", d);
	}
}
