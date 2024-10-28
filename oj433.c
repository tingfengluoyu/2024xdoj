#include<stdio.h>
int main()
{
    double n = 0;
    scanf("%lf", &n);
    double sn = 0;
    for(double i = 1;i <= n;i++)
    {
        sn += (1.0 + 1.0 / i);
    }
    printf("%.1f",sn);
    return 0;
}