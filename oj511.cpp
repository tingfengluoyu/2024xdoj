#include<stdio.h>
#include<math.h>
int main()
{
    long long high = 0;//高度
    long long n = 0;//落地次数
    scanf("%lld %lld",&high,&n);

    long long x = 0;//x表示距离
    double gao = 0;//gao表示第n次落地时的反弹高度
    for(long long i = 0;i < n;i++)
    {
        if(n == 1)
        {
            x = high;
        }
        else
        {
            x += 2 * high / pow(2,i);
        }
        if (i == n - 1)
        {
                gao = (double)high / pow(2,n);
        }
    }
    if(n > 1)
    {
    x -= high;
    }
    printf("%.1f %.1f",(double)x,gao);
    return 0;
}