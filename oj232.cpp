#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
    char arr[51];
    fgets(arr, 51, stdin); // 读取最多50个字符加上一个空字符

    // 移除换行符
    size_t len = strlen(arr);
    if (len > 0 && arr[len - 1] == '\n') {
        arr[len - 1] = '\0'; // 将换行符替换为字符串结束符
        len--; // 更新长度
    }

    char* p = arr;
    char* q = &arr[len - 1]; // q现在指向最后一个字符

    while (p < q) {
        if (*p != *q) {
            printf("no\n");
            return 0;
        }
        p++;
        q--;
    }

    printf("yes\n");

    return 0;
}