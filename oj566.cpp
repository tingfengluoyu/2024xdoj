#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 用于记录每个数字出现的次数
    int counts[101] = { 0 }; // 因为数字范围是1到100

    for (int i = 0; i < n; i++) {
        counts[arr[i]]++;
    }

    int found = 0;
    // 按照原始顺序打印有效数字
    for (int i = 0; i < n; i++) {
        if (counts[arr[i]] >= 3 && counts[arr[i]] > 0) { // 检查是否是有效数字且尚未打印
            printf("%d ", arr[i]);
            counts[arr[i]] = -1; // 标记为已打印
            found = 1;
        }
    }

    if (!found) {
        printf("No");
    }

    free(arr); // 释放动态分配的内存
    return 0;
}