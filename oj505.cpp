#include <stdio.h>
long long combination(int n)
{
    return (long long)n * (n - 1) / 2;
}
int main()
{
    int m = 0;
    int n = 0;
    long long a = 0;
    scanf("%d %d",&m,&n);
    
    a = combination(n + 1) * combination(m + 1);
    printf("%lld\n",a);
    return 0;
}