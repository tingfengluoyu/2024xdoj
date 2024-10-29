#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch = 0;
    int daxie = 0;
    int xiaoxie = 0;
    int shuzi = 0;
    while((ch = getchar()) != '!')
    {
        if(isupper(ch))
        {
           daxie++;
        }
        else if(islower(ch))
        {
            xiaoxie++;
        }
        else if(isdigit(ch))
        {
            shuzi++;
        }
    }
    printf("%d %d %d",daxie,xiaoxie,shuzi);
    return 0;
}