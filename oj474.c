#include<stdio.h>
int main()
{
    int n = 0;//n是需要的铅笔数量
    scanf("%d",&n);
    int a1 = 0;//a1是第一种包装有的铅笔数
    int b1 = 0;//b1是第一种包装的价格
    scanf("%d %d",&a1,&b1);
    int a2 = 0;//a2是第二种包装的铅笔数
    int b2 = 0;//b2是第二种包装的价格
    scanf("%d %d",&a2,&b2);
    int a3 = 0;//a3是第三种包装的铅笔数
    int b3 = 0;//b3是第三种包装的价格
    scanf("%d %d",&a3,&b3);

    int arr[3] = {a1,a2,a3};//分别将袋数和价格用数组存储方便计算
    int brr[3] = {b1,b2,b3};
    int t = 0;//t是老师确认购买包装类型后所需购买的袋数
    int i;//作为循环的变量
    int pay = ~0;//最后要支付的金额

    for(i = 0;i < 3;i++)
    {
        //先依次计算出3种包装所需的袋数，再对费用计算，最后比较费用，输出最小的值

        t = (n + arr[i] - 1) / arr[i];//计算3种包装所需的最小袋数
        int cost = t * brr[i];//计算对应3种包装所需总金额
        if(i == 0 || cost < pay)
        {
           pay = cost;//比较3种包装的价格后，将最小的值赋给pay,即最后的支付金额
        }
    }
    printf("%d\n",pay);
    return 0;
}