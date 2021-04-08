#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void *p1, const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int a,d=1;
	char b[2000][76],others[76];
	scanf("%d", &a);
	for(int i=0;i<a;i++)
	{
		scanf("%s", b[i]);
		gets(others);
	}
	qsort(b,a,76,compare);
	for(int i=0;i<a;i++)
	{
		if(strcmp(b[i],b[i+1])==0)
			d++;
		else
		{
			printf("%s %d\n", b[i], d);
			d=1;
		}
	}
}
