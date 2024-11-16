#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d" ,&arr[i]);
    }

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[max] < arr[i])
        {
            max = i;
        }
    }
    printf("%d %d",arr[max],max + 1);
    return 0;
}