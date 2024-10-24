//求十个数中的最大值
#include<stdio.h>
int main()
{
    //创建数组
    int shuzu[10] = {0};//初始化数组
    //输入
    int i = 0;//引入变量i，并初始化
    for ( i = 0; i < 10; i++)//依次输入i作为数组中的数，i++表示依次输入数组中的数i
    {
    scanf("%d",&shuzu[i]);//引号内表示要提出的元素所表达出的字符类型，“&”表示要提出的元素的来源
    //该函数用于提取用户输入的数据，检验效果需输入数据
    }
    int max = shuzu[0];//假设数组的第一个数就是最大值
    //用剩下的值和已有的max进行比较，如果有更大的数，就以更大的数为max最大值
    for (i = 1; i < 10; i++)
    {
        if (shuzu[i] > max)
        {
                max = shuzu[i];
        }
    }
    printf("max = %d\n", max);
    return 0;
}