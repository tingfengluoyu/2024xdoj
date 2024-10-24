#include<stdio.h>
int main()
{
char ch = 0;
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch - 'A' + 'a';
    }
    else if(ch >= 'a' && ch <= 'b')
    {
        ch = ch - 'a' + 'A';
    }
    printf("%c",ch);
    return 0;
}