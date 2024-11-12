#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int arr[n] = {0};
    int brr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 1; i < n - 1; i++)
    {
        brr[i] = (arr[i - 1] + arr[i] + arr[i + 1]) / 3;
    }

    brr[0] = brr[1];
    brr[n - 1] = brr[n - 2];
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",brr[i]);
    }
    return 0;
}