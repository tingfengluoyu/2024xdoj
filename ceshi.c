//写一个代码求两个整数的和
//scanf函数是输入函数
#define _CRT_SECURE_NO_WARNINGS 1//这是VS编译禁用警告的代码，不是C语言标准规定，其他编译器可以不用加上这行代码
//放在代码第一行
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int sum = 0;//a+b的结果是一个新的数，要用一个新的容器容纳，于是创建一个int空间并命名为sum，int sum = 0是初始化这个容器，与后面的结果无关
    scanf("%d %d", &a, &b);//输入函数
    sum = a + b;
    printf("%d\n",sum);
    return 0;
}
//运行后需要自己填入数字，数字之间填上空格，打上回车才会出现结果，比如打出 3 4，按下回车，会出现结果为7
//scanf_s函数-VS编译提供的，不是C语言标准规定的，在其他的编译器使用会出现问题