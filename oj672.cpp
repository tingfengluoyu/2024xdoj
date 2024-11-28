#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

double factorial(int a);

int main()
{
    int n = 0;
    double x, sum = 0;
    scanf("%d %lf", &n, &x);

    for (int i = 1; i <= n; i++) {
        // 奇数项，符号为正
        if (i % 2 == 1) {
            sum += pow(x, 2 * i - 1) / factorial(2 * i - 1);
        }
        // 偶数项，符号为负
        else {
            sum -= pow(x, 2 * i - 1) / factorial(2 * i - 1);
        }
    }

    printf("%.4f\n", sum);

    return 0;
}

double factorial(int a)
{
    if (a == 0 || a == 1) {
        return 1;
    }

    int num = 1;

    while (a > 1) {
        num *= a;
        a -= 1;
    }
    return num;
}