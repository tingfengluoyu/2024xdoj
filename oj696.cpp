#include<stdio.h>
int main ()
{
    int n = 0;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int max = 0;
    int min = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
    }

    if (max != n - 1)
    {
        int t = arr[n - 1];
        arr[n - 1] = arr[max];
        arr[max] = t;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[min])
        {
            min = i;
        }
    }
    
    if (min != 0)
    {
        int a = arr[0];
        arr[0] = arr[min];
        arr[min] = a;
    }


    for (int i = 0; i < n; i++)
    {
         printf("%d ",arr[i]);
    }

    return 0;
}