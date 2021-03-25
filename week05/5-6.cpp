#include <stdio.h>
#include <string.h>
int main()
{
	int a;
	scanf("%d", &a);
	char b[100][10],t[10];
	for(int i=0;i<a;i++)
		scanf("%s", b[i]);
	for(int i=0;i<a;i++)
		for(int j=i+1;j<a;j++)
			if(strcmp(b[i],b[j])>0)
			{
				strcpy(t, b[i]);
				strcpy(b[i], b[j]);
				strcpy(b[j], t);
			}
	for(int i=0;i<a;i++)
		printf("%s\n", b[i]);
}
