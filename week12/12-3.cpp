#include <stdio.h>
int main()
{
	int N,M,a[10001]={},t;
	while(scanf("%d%d", &N, &M)==2)
	{
		for(int i=0;i<N;i++)
			scanf("%d", &a[i]);
		for(int i=0;i<N;i++)
			for(int j=i+1;j<N;j++)
			{
				if(a[i]%M>a[j]%M)
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
				else if(a[i]%M==a[j]%M && a[i]%2==0 && a[j]%2)
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
				else if(a[i]%M==a[j]%M && a[i]%2 && a[j]%2 && a[i]<a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
				else if(a[i]%M==a[j]%M && a[i]%2==0 && a[j]%2==0 && a[i]>a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		printf("%d %d\n", N, M);
		for(int i=0;i<N;i++)
			printf("%d\n", a[i]);
	}
}
