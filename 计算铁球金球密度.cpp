#include <stdio.h>

    const double PI = 3.1415926;
    const float P1 = 7.86;
    const float P2 = 19.3;
    int a = 0;
    int b = 0;
    
int main()
{
    scanf("%d %d",&a,&b);
    double ra = a/10.0;
    double rb = b/10.0;
    double num1 = 0;
    double num2 = 0;
    num1 = (4.0/3.0)*(ra/2.0)*(ra/2.0)*(ra/2.0)*PI*P1;
    num2 = (4.0/3.0)*(rb/2.0)*(rb/2.0)*(rb/2.0)*PI*P2;
    printf("%.3f %.3f",num1,num2);
    return 0;
}
