#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int arr[n] = {0};
    int max = 0;
    int min = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[min] > arr[i])
        {
            min = i;
        }
        if (arr[max] < arr[i])
        {
            max = i;
        }
    }
    
    int t = arr[max];
    arr[max] = arr[min];
    arr[min] = t;

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}