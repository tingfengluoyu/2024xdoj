#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int i = 0;
    int sum = 0;

    do
    {
        sum += arr[i] % 10;
        arr[i] /= 10;
        if(arr[i] == 0)
        {
            i++;
        }
    }
    while (i < n);
    
    printf("%d",sum % 10);
}