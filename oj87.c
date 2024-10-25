#include<stdio.h>
int main()
{
    int m = 0;
    int mark = 0;
    int i = 0;
    while(1)
    {
        scanf("%d",&m);
        if(m == 0)
        {
            break;
        }
        if(m == 1)
        {
            mark += 1;
            i = 0;
        }
        else if(m == 2)
        {
            mark += 2 * (i + 1);
            i++; 
        }
    }
    
    
    printf("%d\n",mark);

    return 0;
}