#include <stdio.h>
#include<math.h>
int main() {
    int n = 0; 
    scanf("%d", &n);

    int sum = n * n * n;

    if(n % 2 == 0)
    {
       for(int i = n / 2;i > 0;i--)//从n/2到1
       {
           printf("%d ",n * n - (2 * i - 1));
       }
       for(int i = 1;i <= n / 2;i++)//从1到n/2
       {
           printf("%d ",n * n + (2 * i - 1));
       }
    }
    else
    {
       for(int i = (n - 1) / 2;i > 0;i--)//从(n-1)/2到1
       {
           printf("%d ",n * n - 2 * i);
       }
       printf("%d ",n * n);
       for(int i = 1;i <= (n - 1) / 2;i++)
       {
           printf("%d ",n * n + 2 * i);
       }
    }
    return 0;
}