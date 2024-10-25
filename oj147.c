//题目描述：计算给定一组整数中奇数的和，直到遇到0时结束。

//输入格式：共一行，输入一组整数，以空格分隔

//输出格式：输出一个整数

//示例：
//输入：1 2 3 4 5 0 6 7 
//输出：9
#include<stdio.h>
int main()
{
    int m = 0;
    int t = 0;
    while(1)
    {
        scanf("%d",&m);
        if(m % 2 != 0)
        {
           t += m;
        }else if(m == 0)
        {
            break;
        }
    }
    printf("%d\n",t);
    return 0;
}