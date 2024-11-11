#include <stdio.h>
#include <stdlib.h>

// 函数声明
int isArithmeticSequence(int arr[], int n);
void sortArray(int arr[], int n, int originalIndex[]);
void printDifferences(int arr[], int n);
void printPositions(int arr[], int n, int originalIndex[]);

int main() {
    int n;
    scanf("%d", &n); // 读取序列长度

    int arr[n];
    int originalIndex[n]; // 存储原始索引
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // 读取序列中的每个整数
        originalIndex[i] = i; // 初始化原始索引数组
    }

    sortArray(arr, n, originalIndex); // 对数组进行排序

    if (isArithmeticSequence(arr, n)) {
        printPositions(arr, n, originalIndex);
    } else {
        printDifferences(arr, n);
    }

    return 0;
}

// 判断是否为等差数列
int isArithmeticSequence(int arr[], int n) {
    if (n < 2) return 0; // 序列长度小于2，不能构成等差数列

    int diff = arr[1] - arr[0];
    for (int i = 2; i < n; i++) {
        if (arr[i] - arr[i - 1] != diff) {
            return 0; // 公差不一致，不是等差数列
        }
    }
    return 1; // 公差一致，是等差数列
}

// 对数组进行排序，并记录原始索引
void sortArray(int arr[], int n, int originalIndex[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                int tempIndex = originalIndex[j];
                originalIndex[j] = originalIndex[j + 1];
                originalIndex[j + 1] = tempIndex;
            }
        }
    }
}

// 打印最大差值和最小差值
void printDifferences(int arr[], int n) {
    int maxDiff = arr[1] - arr[0];
    int minDiff = arr[1] - arr[0];
    for (int i = 1; i < n - 1; i++) {
        if (arr[i + 1] - arr[i] > maxDiff) {
            maxDiff = arr[i + 1] - arr[i];
        }
        if (arr[i] - arr[i - 1] < minDiff) {
            minDiff = arr[i] - arr[i - 1];
        }
    }
    printf("%d %d\n", maxDiff, minDiff);
}

// 打印排序后各个数据在原数列中的对应位置
void printPositions(int arr[], int n, int originalIndex[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", originalIndex[i] + 1); // 输出位置（从1开始计数）
    }
    printf("\n");
}