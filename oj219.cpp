#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    // 检查n是否为素数
    if (n == 2 || n == 3) {
        printf("YES");
    }
    else {
        int a = 0; // 用于标记n是否为素数
        // 如果n大于3，检查是否有除了1和它自身以外的因数
        if (n > 3) {
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    a = 1; // 发现因数，n不是素数
                    break;
                }
            }
        }
        // 根据a的值输出结果
        if (a == 0) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }

    return 0;
}