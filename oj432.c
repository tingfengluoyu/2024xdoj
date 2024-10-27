#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int weishu = 0;
    if(n == 0)
    {
        printf("1");
    }
    
    else if (n != 0 )
    {
        while(n != 0)
     {
        n /= 10;
        weishu++;
     }
        printf("%d",weishu);
    }
    return 0;
}