#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int prime(int x);
int isDivisibleByPrime(int sum, int primeNum);

int main() {
    char arr[10];
    scanf("%9s", arr);

    int sum = 0;
    char* p = arr;
    while (*p) {
        sum += *p - '0';
        p++;
    }

    if (sum <= 2) {
        printf("sum <=2.");
        return 0;
    }
    else {
        int max = 0;
        for (int i = 2; i <= (int)sqrt(sum); i++) {
            if (sum % i == 0 && prime(i)) {
                max = i;
            }
        }
        if (max == 0 && prime(sum)) { // 如果没有找到质因数，且sum大于2，说明sum本身是质数
            max = sum;
        }
        printf("%d\n", max);
    }

    return 0;
}

int prime(int x) {
    if (x <= 1) return 0;
    if (x == 2 || x == 3) return 1;
    if (x % 2 == 0 || x % 3 == 0) return 0;
    int limit = (int)sqrt(x);
    for (int i = 5; i <= limit; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}