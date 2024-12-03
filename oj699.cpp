#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
    int n = 0; // 评委总人数
    int m = 0; // 组长序号
    float sum = 0;
    float average = 0;
    int arr[20] = { 0 }; // 存储评委打分的数组

    // 输入评委人数和组长序号
    scanf("%d %d", &n, &m);

    // 输入每位评委的打分
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 初始化最大值和最小值
    int max = arr[0];
    int min = arr[0];

    // 找出最大值和最小值
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // 判断组长打分是否为最高分或最低分
    if (arr[m - 1] == max) {
        sum += max;
    }
    if (arr[m - 1] == min) {
        sum += min;
    }

    // 计算总和，去掉最高分和最低分
    for (int i = 0; i < n; i++) {
        if (arr[i] == max && i != m - 1) {
            arr[i] = 0;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == min && i != m - 1) {
            arr[i] = 0;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // 计算有效分数的个数
    int valid_count = n;
    if (max != arr[m - 1]) {
        valid_count--;
    }
    if (min != arr[m - 1]) {
        valid_count--;
    }

    // 计算平均值
    average = sum / (float)valid_count;

    // 输出平均值，保留两位小数
    printf("%.2f", average);

    return 0;
}