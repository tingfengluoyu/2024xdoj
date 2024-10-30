#include<stdio.h>
#include<math.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        int a = 0;
        scanf("%d",&a);
        double weishu = 0;
        int b = a;
        while(b > 0)
        {
            weishu++;
            b /= 10.0;
        }
        double c = (a * a) % (int)pow(10.0,weishu);
        if(a == c)
        {
            printf("%d\n",a);
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}