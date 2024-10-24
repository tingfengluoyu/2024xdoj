#include<stdio.h>
int main()
{
    int P(int num);    
    int a = 0;
    int b = 0;
    int i = 0;
    scanf("%d %d",&a,&b);
    
    for(i = a; i <= b; i++)
       if(P(i))
       {
        printf("%d\n",i);
       }
    return 0;
}
int P(int num)
{
    if(num <= 1)return 0;

    int sum = 0;
    for(int i = 1; i <= num / 2;i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }

    if(sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}