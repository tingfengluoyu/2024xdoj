#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        int a = arr[i];
        int len = 0;

        while (a > 0) {
            len++;
            a /= 10;
        }

        int square = arr[i] * arr[i];
        int weishu = 1;
        for (int j = 0; j < len; j++) {
            weishu = weishu * 10;
        }

        int lastDigits = square % weishu; // 获取平方数的最后len位

        if (lastDigits == arr[i]) {
            printf("%d\n", arr[i]);
        }
        else {
            printf("No\n");
        }
    }

    free(arr);
    return 0;
}