#include <stdio.h>
int main()
{
	char a[1001],c[128],t1;
	for(int i=0;gets(a);i++)
	{
		int b[128]={},t;
		for(int j=0;j<128;j++)
			c[j]=j;
		if(i)
			printf("\n");
		for(int j=0;a[j];j++)
			b[a[j]]++;
		for(int j=0;j<128;j++)
			for(int k=j+1;k<128;k++)
			{
				if(b[j]>b[k])
				{
					t=b[j];
					b[j]=b[k];
					b[k]=t;
					t1=c[j];
					c[j]=c[k];
					c[k]=t1;
				}
				if(b[j]==b[k] && c[j]<c[k])
				{
					t1=c[j];
					c[j]=c[k];
					c[k]=t1;
				}
			}
		for(int j=0;j<128;j++)
			if(b[j])
				printf("%d %d\n", c[j], b[j]);
	}
}
