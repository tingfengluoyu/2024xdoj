#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    char c = 0;
    scanf("%d %d %c",&a,&b,&c);
    int sum = 0;
    switch(c)
    {
        case '+':
        sum = a + b;
        printf("%d%c%d=%d",a,c,b,sum);
        break;

        case '-':
        sum = a - b;
        printf("%d%c%d=%d",a,c,b,sum);
        break;

        case '*':
        sum = a * b;
        printf("%d%c%d=%d",a,c,b,sum);
        break;

        case '/':
        sum = a / b;
        printf("%d%c%d=%d",a,c,b,sum);
        break;

        case '%':
        sum = a % b;
        printf("%d%c%d=%d",a,c,b,sum);
        break;
    }
   
    return 0;
}