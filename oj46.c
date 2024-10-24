#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int arr[100] = {0};
    int i = 0;
    int zhe = 0;
    for(i = 0;i < n;i++)
       {
        scanf("%d",&arr[i]);
       }
    for(i = 1;i < n - 1;i++)
    {
        if(arr[i - 1] > arr[i] && arr[i + 1] > arr[i])
        {
            zhe++;
        }
        if(arr[i - 1] < arr[i] && arr[i + 1] < arr[i])
        {zhe++;
        }
    }
    printf("%d\n",zhe);   
    return 0;
}