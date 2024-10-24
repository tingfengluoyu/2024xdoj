#include<stdio.h>

int gcd(int a, int b)
{
    while(b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);

    if(b == 0)
    {
        printf("%d\n",a);
        return 0;
    }

    if(a == 0)
    {
        printf("%d\n",b);
        return 0;
    }

    int c = gcd(a,b);
    printf("%d\n",c);

    return 0;
}

