#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    
    double t = 0;
    for(int i = 0;i < n;i++)
    {
        int a = 0;
        scanf("%d",&a);
        t += a;
    }
    
    t = t / n;
    printf("%.2f",t);
    return 0;
}