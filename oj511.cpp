#include<stdio.h>
#include<math.h>
int main()
{
    double high = 0;      //高度
    int n = 0;         //落地次数
    scanf("%lf %d",&high,&n);

    double x = 0;           //x表示距离
    double gao = 0;      //gao表示第n次落地时的反弹高度
    
    for(int i = 0; i < n - 1; i++)
    {
        gao = high / pow(2,i + 1);
        x += 2.0 * gao;
    }
    gao /= 2.0;
    x += high;
    printf("%.1f %.1f",x,gao);
    return 0;
}