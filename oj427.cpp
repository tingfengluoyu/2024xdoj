#include<stdio.h>
#include<math.h>
int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    scanf("%lf %lf %lf",&a,&b,&c);
    double n = 0;
    double m = 0;

    if(sqrt(b * b - 4.0 * a * c) > 0)
    {
        n = (-b + sqrt(b * b - 4.0 * a * c)) / (2.0 * a);
        m = (-b - sqrt(b * b - 4.0 * a * c)) / (2.0 * a);
        printf("%.1f %.1f\n",n,m);
    }
    else if(sqrt(b * b - 4.0 * a * c) == 0)
    {
        n = -b / (2.0 * a);
        printf("%.1f\n",n);
    }
    else
    {
        printf("no\n");
    }
    return 0;
}