# 2020cce
第一週
## 進階題：分式化簡
```C
#include <stdio.h>
int main()
{
	int a,b,c,e,f;
	scanf("%d%d", &a, &b);
	e=a,f=b;
	while(a%b)
	{
		c=a%b;
		a=b;
		b=c;
	}
	printf("%d %d\n", e/c, f/c);
}
```
## 進階題：讀入整數反序列印
```C
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
```
## 進階題：A的B次方函數
```C
#include <stdio.h>
int MYPOWER(int a, int b)
{
	int c=1;
	for(int i=0;i<b;i++)
		c*=a;
	return c;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
## 進階題：漸增數列相加
```C
#include <stdio.h>
int main()
{
	int a,b=0;
	scanf("%d", &a);
	for(int i=1;i<a;i++)
		b+=i*(i+1);
	printf("%d\n", b);
}
```
## 基礎題：找零錢
```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d=50*%d+5*%d+1*%d\n", a, a/50, a%50/5, a%5);
}
```
## 基礎題：因數個數
```C
#include <stdio.h>
int main()
{
	int a,b=0;
	scanf("%d", &a);
	for(int i=1;i<=a;i++)
		if(a%i==0)
			b++;
	printf("%d\n", b);
}
```
## 基礎題：找倍數
```C
#include <stdio.h>
int main()
{
	int a,b=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d", &a);
		if(a%3==0)
			b++;
	}
	printf("%d\n", b);
}
```
## 基礎題：整數轉換為等級
```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if(a>=90)
		printf("A\n");
	else if(a>=80)
		printf("B\n");
	else if(a>=60)
		printf("C\n");
	else
		printf("F\n");
}
```
第二週
## 指標、位址、陣列
```C
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);
    int *p=&n[0],*p2=&n[2];
    *p=40;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);
    *p2=50;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);
    p2=p;
    *p2=60;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);
}
```
第三週
## 指標陣列1
```C
#include <stdio.h>
int main()
{
    int a[5]={0,10,20,30,40};
    int *p=&a[2];
    *p=222;
    p+=2;
    *p=666;
    p--;
    *p=555;
}
```
## 指標陣列2
```c
#include <stdio.h>
int main()
{
    int a[10]={0,10,20,30,40,50,60,70,80,90};
    int *p=&a[2];///宣告要有*
    *p=222;///使用丟值要有*
    int *p2=p+4;
    *p2=666;
    p2--;///更改位址不用*
    *p2=555;
}
```
## 指標陣列3
```C
#include <stdio.h>
#include <stdlib.h>
int a[5];
int main()
{
  int a[5];
  int *p=(int*)malloc(sizeof(int)*5);
}
```
第四週
## 資料結構1
```C
#include <stdio.h>
struct DATA{
    float x,y,z;
};
int main()
{

}
```
## 資料結構2
```C
#include <stdio.h>
struct DATA{
    float x,y,z;
}point1;
int main()
{
    point1.x=3;
    point1.y=5;
    point1.z=7;
    printf("%f %f %f\n", point1.x, point1.y, point1.z);
}
```
## 資料結構3
```C
#include <stdio.h>
struct DATA{
    float x,y,z;
}point1;
struct DATA points[5];
int main()
{
    for(int i=0;i<5;i++)
    {
        points[i].x=i*10;
        points[i].y=20;
        points[i].z=0;
        printf("%f %f %f\n", points[i].x, points[i].y, points[i].z);
    }
}
```
## 資料結構4
```C
#include <stdio.h>
struct DATA{
    float x,y,z;
}a,b,c;
struct DATA points[5];///全域變數有初始值0
int main()
{
    struct DATA d,e,f;///區域變數無初始值
    for(int i=0;i<5;i++)
    {
        points[i].x=i*10;
        points[i].y=20;
        points[i].z=0;
        printf("%f %f %f\n", points[i].x, points[i].y, points[i].z);
    }
}
```
## 資料結構5
```C
#include <stdio.h>
struct DATA{
    float x,y,z;
}a,b;
struct DATA c,d;
int main()
{
    struct DATA e;
    struct DATA f={1,2,3};
    printf("%f %f %f\n", a.x, a.y, a.z);
    printf("%f %f %f\n", b.x, b.y, b.z);
    printf("%f %f %f\n", c.x, c.y, c.z);
    printf("%f %f %f\n", d.x, d.y, d.z);
    printf("%f %f %f\n", e.x, e.y, e.z);
    printf("%f %f %f\n", f.x, f.y, f.z);
}
```
第五週
## 字串1
```C
#include <stdio.h>
int main()
{
    char a[20]="233233233233233233";
    for(int i=0;a[i];i++)
        if(a[i]!='2')
            printf("%c", a[i]);
    printf("\n");
}
```
## 字串2
```C
#include <stdio.h>
int main()
{
    char a[10]="decline",b[10]={'p','r','o','p','e','r','\0'};
    printf("%s\n%s\n", a, b);
}
```
## 字串3
```C
#include <stdio.h>
int main()
{
    char a[10]="decline",b[10]={'p','r','o','p','e','r','\0'};
    printf("%s\n%s\n", a, b);
    char c[]="majority它在雙引號裡宣告會自動補零",d[]={'m','a','j','o','r','i','t','y'};
    printf("%s\n壞掉的d:%s\n", c, d);
}
```
## 字串4
```C
#include <stdio.h>
int main()
{
    char a[5][10]={"decline","proper","majority","bullet","shop"};
    for(int i=0;i<5;i++)
        printf("%s\n", a[i]);
}
```
## 數字排序
```C
#include <stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
```
## 字串排序
```C
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
```
第七週
## 快速排序
```C
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
```
## uva10420
```C
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
```
第八週
## uva10226
```C
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
```
