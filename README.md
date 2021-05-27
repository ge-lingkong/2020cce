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
第十週
## uva10008
```C
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
```
第十一週
## typedef再定義
```C
#include <stdio.h>
unsigned char c;
typedef unsigned char uchar;
uchar d;
int main()
{
    c='A';
    d=c;
    printf("%c", d);
}
```
## 資料結構再定義
```C
#include <stdio.h>
typedef struct data{
    char c;
    int a;
}DATA;
DATA b;
int main()
{
    b.c='A';
    b.a=1;
    printf("%c %d", b.c, b.a);
}
```
## 轉成整數的指標
```C
#include <stdio.h>
#include <stdlib.h>
int compare(const void *a1,const void *a2)
{///轉成「整數的指標」,準星看到的是整數
    int p1=*((int*)a1);
    int p2=*((int*)a2);
    if(p1>p2)
        return 1;
    else if(p1<p2)
        return -1;
    else
        return 0;
}
int main()
{
    int a[10]={8,9,2,5,6,3,4,1,10,7};
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++)
        printf("%d ", a[i]);
}
```
第十二週
## uva10062
```C
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
```
## uva299
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d", &a);
	for(int i=0;i<a;i++)
	{
		int c[50]={},d=0,t;
		scanf("%d", &b);
		for(int j=0;j<b;j++)
			scanf("%d", &c[j]);
		for(int j=0;j<b-1;j++)
			for(int k=0;k<b-1;k++)
				if(c[k]>c[k+1])
				{
					t=c[k];
					c[k]=c[k+1];
					c[k+1]=t;
					d++;
				}
		printf("Optimal train swapping takes %d swaps.\n", d);
	}
}
```
## uva11321
```C
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
```
第十三週
## 點擊次數
```C
void setup(){
  size(1024, 400);
}
void draw(){
  if(mousePressed)
    background(255, 0, 255);//按下變紫色
  else
    background(62, 141, 247);//沒按下是淡藍色
  textSize(36);//文字大小
  text("Now a is:" + a, 412, 200);//顯示文字(要顯示的文字,x軸位置,y軸位置)
}
int a=0;
void mousePressed(){//每點一次a+1
  a++;
}
```
## 倒計時
```C
void setup(){
  size(800,400);
  textFont(createFont("標楷體", 64));//(字型,大小)
}
void draw(){
  background(#3E8DF7);//(色碼)，也可用(R,G,B)
  int s=second(),m=minute(),h=hour();//實時變動
  text("現在時間:" + h + ":" + m + ":" + s, 100, 200);
  int total=s+60*m+3600*h;
  int closeH=17, closeM=40, closeS=0;
  int total2=closeS+closeM*60+closeH*3600;
  int ans=total2-total;
  text("剩下:" + ans + "秒", 100, 100);
  int ansH=ans/3600%60, ansM=ans/60%60, ansS=ans%60;
  text("剩餘時間:" + ansH + ":" + ansM + ":" + ansS, 100, 300);
}
```
第十四週
## 點擊抽數字
```C
int ans=0;
void setup(){
  size(400, 200);
  textSize(30);
}
void draw(){
  background(#435FF7);
  text(ans, 20, 30);
}
void mousePressed(){
  ans=(int)random(60);
}
```
## 點擊洗牌(一次兩張)
```C
int []a={1,2,3,4,5,6,7,8,9,10};
int i1,i2;
void setup(){
  size(400, 200);
  textSize(30);
}
void draw(){
  background(#435FF7);
  for(int i=0;i<10;i++){
    text(a[i], i*40, 50);
  }
  rect(i1*40, 50, 30, 30);
  rect(i2*40, 50, 30, 30);
}
void mousePressed(){
  for(int i=0;i<100;i++){//多洗幾次牌弄亂
    i1=(int)random(10);
    i2=(int)random(10);
    int t=a[i1]; a[i1]=a[i2]; a[i2]=t;
  }
}
```
## 抽五個數字球
```C
int []a=new int[47];
void setup(){
  size(400, 200);
  textSize(30);
  for(int i=0;i<47;i++)
    a[i]=i+1;
  for(int i=0;i<1000;i++){
    int i1=(int)random(47);
    int i2=(int)random(47);
    int t=a[i1]; a[i1]=a[i2]; a[i2]=t;
  }
}
int N=0,rolling=0;
void draw(){
  textAlign(CENTER,CENTER);//文字對齊(中,中)
  background(#23CBA0);
  for(int i=0;i<N;i++){
    int x=i*80+40;
    if(i==N-1 && rolling>0){
      x+=rolling;
      rolling-=3;
    }
    fill(255); ellipse(x, 100, 55,55);
    fill(128); text(a[i], x+1, 100+1);
    fill(0); text(a[i], x, 100);
  }
}
void mousePressed(){
  if(N<5){
    rolling=400-N*90;
    N++;
  }
}
```
