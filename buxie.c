#include<stdio.h>
int main()
{
    int arr[10];
    int max = 0;// 假设第一个元素是最大的，并存储在 max 变量中
    int i = 0;
    // 读取第一个元素并将其设置为最大值
    scanf("%d",&arr[0]);//已经读取第一个数
    max = arr[0];
     // 从用户那里获取数组的其余值
    for(i = 1;i < 10;i++)//先前已经读取第一个数，在循环中就要从第二个数开始读取，因而i = 1，
    {
        scanf("%d",&arr[i]);
        if(arr[i] > max)// 如果当前元素大于 max，则更新 max
        {
          max = arr[i];
        }
    }
    printf("max = %d\n",max);
    return 0;
}