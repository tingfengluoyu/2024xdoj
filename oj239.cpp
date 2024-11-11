#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        arr[i][0] = 1;
        arr[i][i] = 1;

        for (int k = 1; k < i; k++)
        {
            arr[i][k] = arr[i - 1][k - 1] + arr[i - 1][k];
        }
    
        for (int k = 0; k <= i; k++)
        {
            printf("%d ",arr[i][k]);
        }
        printf("\n");
    }
    return 0;
}