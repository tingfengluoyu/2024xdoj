#include<stdio.h>
int main()
{
    int n = 0;
    int da = 0;
    int xiao = 200000;
    int zhong = 0;

    scanf("%d",&n);
    int arr[n] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (xiao > arr[i])
        {
            xiao = arr[i];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (da < arr[i])
        {
            da = arr[i];
        }
    }
    
    if(n % 2 == 0)
    {
        zhong = (arr[n / 2] + arr[(n / 2) - 1]) / 2;
    }
    
    else
    {
        zhong = arr[(n - 1) / 2];
    }
    
    printf("%d %d %d",da,zhong,xiao);
    return 0;
}