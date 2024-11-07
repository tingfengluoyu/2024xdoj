#include<stdio.h>
#include<stdlib.h>
int jueduizhi(int x)
{
    if(x < 0)
    {
        x = -x;
    }
    return x;
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    int arr[n] = {0};
    int min_cha = 10000;
    for(int i = 0; i < n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    for(int i = 1; i < n; i++)
    {
        int cha = abs(arr[i] - arr[i - 1]);
        if(min_cha > cha)
        {
            min_cha = cha;
        }
    }

    printf("%d",min_cha);
    return 0;
}