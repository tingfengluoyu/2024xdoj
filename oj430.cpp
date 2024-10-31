#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
    {
        if(i % 2== 0)
        {
            printf("%d %d\n",i,i * i);
        }
    }
    return 0;
}