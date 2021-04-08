#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void *p1, const void *p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int a;
	scanf("%d", &a);
	char b[100][10];
	for(int i=0;i<a;i++)
		scanf("%s", b[i]);
	qsort(b,a,10,compare);
	for(int i=0;i<a;i++)
		printf("%s\n", b[i]);
}
