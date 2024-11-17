#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    int t = n - 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        brr[t] = arr[i];
        t--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",brr[i]);
    }
    return 0;
}