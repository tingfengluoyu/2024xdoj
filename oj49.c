#include<stdio.h>
#include<math.h>
int main()
{
    double n = 0;
    scanf("%lf",&n);
    double m = sqrt(n);
    if(m - (int)m == 0)
    {
        printf("%d\n",(int)m);
    }else{
        printf("no\n");
    }    
    return 0;
}
