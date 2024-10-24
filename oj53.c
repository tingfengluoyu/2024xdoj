#include<stdio.h>
int main()
{
    int m = 0;
    scanf("%d",&m);
    if(m >= 90)
    {
        printf("A");
    }else if(m >= 80 && m < 90){
        printf("B");
    }else if(m >= 70 && m < 80){
        printf("C");
    }else if(m >= 60 && m < 70){
        printf("D");
    }else if(m < 60){
        printf("E");
    }
    return 0;
}