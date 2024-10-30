#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    double Pi = 0.0;
    for(int i = 0;i < n;i++)
    {
        Pi += 4.0 * (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
    }
    printf("%.6f",Pi);
    return 0;
}