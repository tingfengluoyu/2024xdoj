#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d",&n,&m);
    int p = 0;
    int q = 0;
    int n_yueshu = 0;
    int m_yueshu = 0;
    for(int i = 1;i < n;i++)
    {
        if(n % i == 0)
        {
            p += i;//将n的真约数求和
            n_yueshu++;
        }
    }
    for(int i = 1;i < m;i++)
    {
        if(m % i == 0)
        {
             q += i;//将m的真约数求和
             m_yueshu++;
        }
    }
    if(p == m && q == n)
    {
        printf("yes %d %d\n",n_yueshu,m_yueshu);
    }
    else
    {
        printf("no %d %d\n",n_yueshu,m_yueshu);
    }
    return 0;
}