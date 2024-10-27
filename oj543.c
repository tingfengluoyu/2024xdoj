#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int he = 0;
    for(int i = 1;i <= n;i++)
    {
        if(i % 2 != 0)
        {
            he += i;
        }
    }
    printf("%d",he);
    return 0;
}