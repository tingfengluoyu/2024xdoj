#include<stdio.h>
int main()
{
    int M = 0;
    int geshu = 0;
    scanf("%d",&M);
    for(int i = 10000;i <= 99999;i++)
    {
        int m = 0;
        int n = 0;
        int p = 0;
        int q = 0;
        int l = i / 1000;
        m = i % 10;         //个位数字
        n = (i / 10) % 10;  //十位数字
        p = l % 10;         //千位数字
        q = (l / 10) % 10;  //万位数字
        if(q == m && p == n && i % M == 0)//万位数字等于个位数字且千位数字等于十位数字且该数能被M整除
        {
            geshu++;
        }
    }
    printf("%d %d",M,geshu);
    return 0;
}