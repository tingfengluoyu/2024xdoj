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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0;j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    int count[n] = {0};
    int printed[n] = {0};
    
    for (int i = 0; i < n; i++)
    {
        if (!printed[i])
        {
            count[i] = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count[i]++;
                    printed[j] = 1;
                }
                else
                {
                    break;
                }
            }
            printf("%d:%d\n",arr[i],count[i]);
        }
    }
    return 0;
}