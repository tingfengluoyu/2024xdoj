#include<stdio.h>
int main()
{
    int n = 0;
    double t = 0;
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        if(i % 2 == 0)
        {
            t += (i + 1.0) / (2.0 * i + 1.0);
        }
        else
        {
            t -= (i + 1.0) / (2.0 * i + 1.0);
        }
    }
    printf("%.3f\n",t);
    return 0;
}