#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int arr[n][n];

    // 初始化所有元素为 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }

    // 初始化对角线为 1
    for (int i = 0; i < n; i++) {
        arr[i][i] = 1;
    }

    // 打印矩阵
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}