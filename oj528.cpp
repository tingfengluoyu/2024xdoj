#include <stdio.h>
#include<stdlib.h>
#include <limits.h>

int closestSum(int arr[], int n, int target) {
    int sum, closestSum = INT_MAX;
    int diff, minDiff = INT_MAX;

    // 对数组进行排序
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // 遍历数组，寻找最接近target的三个数之和
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                sum = arr[i] + arr[j] + arr[k];
                diff = abs(target - sum);

                if (diff < minDiff) {
                    minDiff = diff;
                    closestSum = sum;
                }
            }
        }
    }

    return closestSum;
}

int main() {
    int n, target;

    // 输入数组长度
    scanf("%d", &n);
    int arr[n];

    // 输入数组元素
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 输入目标值
    scanf("%d", &target);

    // 输出最接近的三数之和
    printf("%d\n", closestSum(arr, n, target));

    return 0;
}