#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // 引入stdlib.h以使用abs函数

int gcd(int a, int b);
int lcm(int a, int b);

struct fraction {
    int numerator, denominator;
};

int main() {
    fraction a, b, he, cha;
    scanf("%d %d", &a.numerator, &a.denominator);
    scanf("%d %d", &b.numerator, &b.denominator);

    he.denominator = lcm(a.denominator, b.denominator);
    cha.denominator = lcm(a.denominator, b.denominator);

    a.numerator *= he.denominator / a.denominator;
    b.numerator *= he.denominator / b.denominator;

    he.numerator = a.numerator + b.numerator;
    cha.numerator = a.numerator - b.numerator;

    // 约分
    int common_divisor = gcd(abs(he.denominator), abs(he.numerator));
    he.denominator /= common_divisor;
    he.numerator /= common_divisor;

    common_divisor = gcd(abs(cha.denominator), abs(cha.numerator));
    cha.denominator /= common_divisor;
    cha.numerator /= common_divisor;

    // 确保分母为正数
    he.denominator = abs(he.denominator);
    cha.denominator = abs(cha.denominator);

    // 处理负数的情况，并确保负号只出现在分子前
    if (he.numerator < 0) {
        printf("-");
    }
    printf("%d %d\n", abs(he.numerator), he.denominator);

    if (cha.numerator < 0) {
        printf("-");
    }
    printf("%d %d\n", abs(cha.numerator), cha.denominator);

    return 0;
}

int gcd(int a, int b) {
    a = abs(a); // 确保GCD函数的输入为非负数
    b = abs(b);
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b) {
    a = abs(a); // 确保LCM函数的输入为非负数
    b = abs(b);
    return (a / gcd(a, b)) * b; // 避免溢出
}