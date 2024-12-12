#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[10000] = { 0 };
    int array[10000] = { 0 };
    int j = 0;

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        int judge = 1; // ¼ÙÉèÊÇËØÊý
        if (arr[i] == 1) {
            judge = 0;
        }
        else if (arr[i] == 2 || arr[i] == 3) {
            judge = 1;
        }
        else if (arr[i] % 2 == 0 || arr[i] % 3 == 0) {
            judge = 0;
        }
        else {
            for (int k = 5; k * k <= arr[i]; k += 6) {
                if ((arr[i] % k == 0) || (arr[i] % (k + 2) == 0)) {
                    judge = 0;
                    break;
                }
            }
        }
        if (judge) {
            array[j++] = arr[i];
        }
    }

    int print = 0;

    for (int i = 0; i < j - 1; i++) {
        if (array[i + 1] - array[i] == 2) {
            printf("%d %d\n", array[i], array[i + 1]);
            print = 1;
        }
    }

    if (print == 0) {
        printf("empty\n");
    }

    return 0;
}