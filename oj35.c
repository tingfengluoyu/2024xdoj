#include<stdio.h>
#include<math.h>
//将正偶数拆分成两个素数的和，输出最小和最大的素数
int is_prime(int num)
{
    if(num <= 1)
    {
        return 0;
    }
    for(int i = 2; i <= sqrt(num);i++)
    {
        if(num % i == 0)
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

    int a = 0;
    int b = 0;
    
    for(int i = 2; i <= n / 2;i++)
    {
        if(is_prime(i))
        {
            int o = n - i;
            if(is_prime(o))
            {
                a = i;//较小的素数
                b = o;//较大的素数
                break;//找到一堆素数后退出循环
            }
        }
    }
    printf("%d %d",a,b);
    return 0;
}