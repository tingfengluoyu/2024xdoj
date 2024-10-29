#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // 读取输入的月份

    if (n == 1 || n == 2) {
        printf("1\n"); // 第一个月有1对新生的兔子
        return 0;
    }

    long long f0 = 0, f1 = 1, fn = 1; // 初始化斐波那契数列的前两项
    for (int i = 2; i <= n; i++) {
        fn = f0 + f1; // 计算下一项
        f0 = f1; // 更新前两项
        f1 = fn;
    }

    printf("%lld\n", fn); // 输出第n个月的兔子对数
    return 0;
}