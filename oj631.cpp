#include<stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int t = n;
    int count = 0;

    // 计算 n 的位数
    while (t > 0) {
        t /= 10;
        count++;
    }

    // 初始化数组存储每个数字
    int arr[count];
    for (i = 0; i < count; i++) {
        arr[i] = n % 10;
        n /= 10;
    }

    // 对数组进行升序排序
    for (i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 统计每个数字出现的次数
    for (i = 0; i < count; i++) {
        int a = 1; // 至少出现一次
        for (int j = i + 1; j < count; j++) {
            if (arr[i] == arr[j]) {
                a++;
                // 将后面的相同数字设置为 -1，避免重复统计
                arr[j] = -1;
            }
        }
        // 打印结果，跳过 -1 的数字
        if (arr[i] != -1) {
            printf("%d:%d\n", arr[i], a);
        }
    }
    return 0;
}