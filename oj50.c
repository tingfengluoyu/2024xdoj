#include<stdio.h>
int qiuhe(int num)
{
    int he = 0;
    while(num > 0)
    {
        he += num % 10;
        num /= 10;
    }
    return he;
}

int main()
{
    int n = 0;
    scanf("%d",&n);

    int t = 0;
    int max = 0;
    
    for(int i = 0;i < n;i++)
    {
        int cn = 0;
        scanf("%d",&cn);
        
        int cm = qiuhe(cn);

        if(cm > max || (cm == max && cn > t))
        {
            max = cm;
            t = cn;
        }
    }
    
    printf("%d\n",t);
    return 0;
}