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
