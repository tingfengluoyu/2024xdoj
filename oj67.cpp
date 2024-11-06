#include<stdio.h>
int main()
{
    int n = 0;
    int k = 0;
    scanf("%d %d",&n,&k);

    int arr[n] = {0};
    int a = 0;
    for(int i = 0; i < n ; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] == k)
        {
            printf("%d ",i);
            a = 1;
        }
    }
    if(a == 0)
    {
        printf("-1 ");
    }
    printf("\b");
    return 0;
}