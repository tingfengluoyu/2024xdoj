#include<stdio.h>
int main()
{
    double arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%lf",&arr[i]);
    }

    int you = 0;
    int liang = 0;
    int zhong = 0;
    int cha = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] >= 90.0 && arr[i] <= 100.0)
        {
            you++;
        }
        else if (arr[i] >= 70.0 && arr[i] < 89.99)
        {
            liang++;
        }
        else if (arr[i] >= 60.0 && arr[i] < 69.99)
        {
            zhong++;
        }
        else
        {
            cha++;
        }
    }
    printf("%d %d %d %d",you,liang,zhong,cha);
    return 0;
}