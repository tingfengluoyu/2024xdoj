#include<stdio.h>
int main()
{
    int n = 0;
    int sum = 0;
    scanf("%d",&n);
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;//n是整型，不会保留小数而是向下取整，当n被变成小数时会被取整为0
    }
    printf("%d\n",sum);
    return 0;
}