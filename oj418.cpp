#include<stdio.h>
int main()
{
    int N = 0;
    scanf("%d",&N);
    int t = 0;
    int arr[10] = {0};

    while(N > 0)
    {
        t = N % 10;
        arr[t]++;
        N /= 10;
    }

    for(int i = 0;i < 10;i++)
    {
        for(int j = 0;j < arr[i];j++)
        {
            printf("%d ",i);
        }
    }
    printf("\b");
    return 0;
}