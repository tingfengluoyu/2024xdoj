#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    scanf("%d %d",&a,&b);
    if(a >= -10000 && b >= -10000 && a <= 10000 && b <= 10000 && b != 0)
	{
		c = a + b;
		d = a - b;
		e = a * b;
		f = a / b;
		printf("%d\n",c);
		printf("%d\n",d);
		printf("%d\n",e);
		printf("%d\n",f);
	};
	return 0;
}
