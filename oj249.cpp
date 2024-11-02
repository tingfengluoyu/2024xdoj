#include<stdio.h>
#include<math.h>
int prime(int n)//判断是否是素数
{
    for(int i = 2;i <= sqrt(n);i++)
    {
        if(n % i == 0)//如果不是素数则返回0，如果是素数则返回1
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n = 0;
    scanf("%d",&n);

    if(!prime(n))//n不是素数，进行分解
    {
       for(int i = 2;i <= n;)
       {
           if(n % i == 0)
           {
              printf("%d",i);
              n /= i;
              if(n > 1)
              printf("*");
           }
           else
           i++;
       }
    }
    else//n是素数，只输出n
    {
        printf("%d",n);
    }

    return 0;
}