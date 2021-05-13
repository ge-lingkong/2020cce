#include <stdio.h>
int a[10000],t;
void swap(int i,int j)
{
	t=a[i];
	a[i]=a[j];
	a[j]=t;
}
int main()
{
	int N,M;
	while(scanf("%d%d", &N, &M)==2)
	{
		for(int i=0;i<N;i++)
			scanf("%d", &a[i]);
		for(int i=0;i<N;i++)
			for(int j=i+1;j<N;j++)
			{
				if(a[i]%M>a[j]%M)
					swap(i,j);
				else if(a[i]%M==a[j]%M && a[i]%2==0 && a[j]%2)
					swap(i,j);
				else if(a[i]%M==a[j]%M && a[i]%2 && a[j]%2 && a[i]<a[j])
					swap(i,j);
				else if(a[i]%M==a[j]%M && a[i]%2==0 && a[j]%2==0 && a[i]>a[j])
					swap(i,j);
			}
		printf("%d %d\n", N, M);
		for(int i=0;i<N;i++)
			printf("%d\n", a[i]);
	}
}
