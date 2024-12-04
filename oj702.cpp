#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = 0;

    for (int i = 0; i < n; i++) {
        int count = 1; // 初始化为 1，因为至少有一个元素
        for (int j = i + 1; j < n; j++) { // 从下一个元素开始比较
            if (arr[j] == arr[i]) {
                count++;
            }
            else {
                break; // 如果不相同，就停止计数
            }
        }
        if (count > max) {
            max = count; // 更新最大值
        }
    }

    printf("%d\n", max);

    return 0;
}