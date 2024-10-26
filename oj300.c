#include<stdio.h>
int main()
{
    int m = 0;
    int weishu = 0;
    scanf("%d",&m);
    if(m == 0)
    {
        weishu = 1;
    }
    while(m != 0)
    {
        m /= 10;
        weishu++;
    }
    printf("%d\n",weishu);
    return 0;
}