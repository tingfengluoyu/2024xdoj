#include<stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d",&m,&n);//m是头，n是脚
    int a = 0;
    int b = 0;
    a = (4 * m - n)/2;
    b = n /2 - m;
    printf("%d %d",a,b);
    return 0;
}