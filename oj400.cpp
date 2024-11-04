#include<stdio.h>
#include<math.h>
int sushu(int x)
{
    for(int i = 2; i <= sqrt(x); i++)//从2到根号x判断
    {
        if(x % i == 0)//有能除的，不是素数
        {
            return 1;//不是素数，返回1
        }
    }
    return 0;//是素数，返回0
}
int main()
{
    int n = 0;
    int sum = 0;
    scanf("%d",&n);

    if(n > 100000 || n <= 1)
    {
        printf("0\n");
        return 0;
    }

    for(int i = 2; i <= n; i++)
    {
        if(sushu(i) == 0)//不是素数，这里是1，是素数，这里是0，进入语句
        {
            sum += i;
        }
       
    }
    printf("%d\n",sum);
    return 0;
}