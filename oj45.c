#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int arr[30] = {0};
    int i = 0;
    int max = 0;
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 1;i < n;i++)
    {
        int f = abs(arr[i] - arr[i - 1]);
        if(max < f)
        max = f;
    }
    
    printf("%d\n",max);
    return 0;
}