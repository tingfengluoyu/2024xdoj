#include<stdio.h>
int main()
{
    double a = 0;
    scanf("%lf",&a);

    double x = 1.0;
    double t = 0;//储存迭代前的x的值用于作差
    while(1)
    {
        t = x;
        x = (t + (a / t)) / 2.0;
        if(x - t < 0.00001 && x - t > -0.00001)
        {
            break;
        }
    }
    printf("%.5f",x);
    return 0;
}