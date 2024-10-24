#include<stdio.h>
int a = 100;//全局变量，花括号外的是全局变量
            //当全局变量和局部变量冲突时，局部优先
int main()
{   
    int age = 20;
    double weight = 75.5;
    age = age +1;
    weight = weight -10;
    printf("%d\n", age);
    printf("%lf\n",weight);
    int a = 10;//局部变量，花括号内的是局部变量
    printf("%d\n",a);
    return 0;
}