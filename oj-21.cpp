#include<stdio.h>
int main()
{
	int a,b,c,d,e,f = 0;
	
	scanf("%d",&a);//提取输入的5位整数 
	b = (a/10000) % 10;
	c = (a/1000) % 10;
	d = (a/100) % 10;
	e = (a/10) % 10;
	f = (a/1) % 10;
	printf("%d %d %d %d %d",b,c,d,e,f);
	
	return 0;
}
