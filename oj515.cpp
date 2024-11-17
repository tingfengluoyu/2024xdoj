#include<stdio.h>
int main()
{
    int n = 0;
    int target = 0;
    int found = 0;
    scanf("%d",&n);
    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (target == arr[i] + arr[j])
            {
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    return 0;
}