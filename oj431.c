#include<stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d",&m,&n);
    int sum = 0;
    for(int i = m;i <= n;i++)
    {
        sum += i * i;
    }
    printf("%d\n",sum);
    return 0;
}