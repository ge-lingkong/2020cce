#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char b[1000000][32];
int compare(const void *a1,const void *a2)
{
	return strcmp((char*)a1,(char*)a2);
}
int main()
{
	int a,c=0,d=1;
	scanf("%d\n\n", &a);
	for(int i=0;i<a;i++)
	{
		while(1)
		{
			gets(b[c]);
			if(strcmp(b[c],"")==0)
				break;
			c++;
		}
		qsort(b,c,32,compare);
		for(int j=0;j<c;j++)
		{
			if(strcmp(b[j],b[j+1])==0)
				d++;
			else
			{
				printf("%s %.4f\n", b[j], 100*d/(float)c);
				d=1;
			}
			memset(b[j],'\0',32);
		}
		if(i!=a-1)
			printf("\n");
		c=0;
	}
}
