#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	char c;
	int d;
}box;
box array[26];
int compare(const void *a1,const void *a2)
{
	if(((box*)a1)->d > ((box*)a2)->d)
		return -1;
	else if(((box*)a1)->d < ((box*)a2)->d)
		return 1;
	else if(((box*)a1)->c < ((box*)a2)->c)
		return -1;
	else if(((box*)a1)->c > ((box*)a2)->c)
		return 1;
	return 0;
}
int main()
{
	int a;
	char b[10000];
	for(int i=0;i<26;i++)
		array[i].c='A'+i;
	scanf("%d\n", &a);
	for(int i=0;i<a;i++)
	{
		gets(b);
		for(int j=0;b[j];j++)
		{
			if(b[j]>='A' && b[j]<='Z')
				array[b[j]-'A'].d++;
			else if(b[j]>='a' && b[j]<='z')
				array[b[j]-'a'].d++;
		}
	}
	qsort(array,26,sizeof(box),compare);
	for(int i=0;array[i].d;i++)
		printf("%c %d\n", array[i].c, array[i].d);
}
