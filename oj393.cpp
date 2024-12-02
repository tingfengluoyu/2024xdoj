#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int power(int x);

int main()
{
    int n = 0;
    scanf("%d", &n);
    int b = n;
    int count = 0;
    while (b > 0) {
        count++;
        b /= 10;
    }

    int arr[7];
    b = n;
    for (int i = 0; i < count; i++) {
        arr[i] = b % 10;
        b /= 10;
    }

    int sum = 0;
    int a = 0;
    int c = count - 1;

    // ƒÊ–Ú ˝
    for (int j = count - 1; j >= 0; j--) {
        sum += arr[j] * power(a++);
    }

    // Ωµ–Ú≈≈–Ú
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    // º∆À„Ωµ–Ú ˝
    for (int i = 0; i < count; i++) {
        sum += arr[i] * power(c--);
    }

    printf("%d\n", sum);

    return 0;
}

int power(int x) {
    int result = 1;
    for (int i = 0; i < x; i++) {
        result *= 10;
    }
    return result;
}