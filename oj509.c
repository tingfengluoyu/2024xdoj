#include<stdio.h>
#include<ctype.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int ji = 0;
    int ou = 0;
    char a =0;
    while((a = getchar()) != '!')
    {
        if(isalpha(a))
        {
           int yushu = 0;
           yushu = a % n;
           if(yushu % 2 == 0)
           {
            ou++;
           }
           else
           {
            ji++;
           }
        }
    }
    printf("%d %d",ji,ou);
    return 0;
}