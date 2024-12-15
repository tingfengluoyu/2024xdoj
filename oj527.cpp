#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<cmath>

int main() {
    int n = 0;
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int reversed = 0; // 用于存储逆序后的整数

    // 处理负数，取绝对值
    int original_n = n;
    if (n < 0) {
        n = -n;
    }

    // 使用模运算和整除逆序整数
    while (n > 0) {
        reversed = reversed * 10 + n % 10; // 将最后一位数字添加到逆序整数的末尾
        n /= 10; // 去掉最后一位数字
    }

    if (original_n > 0 && reversed > (int)pow(2, 32) - 1){
        return 0;
    }

    if (original_n < 0 && reversed>(int)pow(2, 32)) {
        return 0;
    }

    // 如果原始输入是负数，打印负号
    if (original_n < 0) {
        printf("-%d\n", reversed);
    }
    else {
        printf("%d\n", reversed);
    }

    return 0;
}