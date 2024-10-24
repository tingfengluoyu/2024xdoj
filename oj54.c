#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);

    for(int a = 1;a <= 9;a++)
    {
        for(int c = 1;c <= 9;c++)
        {
            int sum = 101 * (a + c);
            int b = (n - sum) / 20;
            if(b >= 0 && b <= 9 && (n - sum) % 20 == 0)
            {
                printf("%d %d %d\n",a,b,c);
            }
        }
    }
    return 0;
}