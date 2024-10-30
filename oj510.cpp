#include<stdio.h>
int main()
{
    unsigned int n = 0;
    int max = 0;
    int min = 9;
    scanf("%d",&n);
    while(n > 0)
    {
       if(max < n % 10)
       {
        max = n % 10;
       }
       if(min > n % 10)
       {
        min = n % 10;
       }
       n /= 10;
    }

    printf("%d %d",max,min);
    return 0;
}