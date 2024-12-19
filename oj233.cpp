#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void copystr(char* p, int m);

int main() {
    char arr[51]; // 字符串长度最大为50，加上一个空字符'\0'
    int m;

    // 读取字符串
    fgets(arr, 51, stdin);

    // 读取整数m
    scanf("%d", &m);
    getchar();

    size_t len = strlen(arr);
    // 如果字符串以换行符结尾，替换为字符串结束符'\0'
    if (len > 0 && arr[len - 1] == '\n') {
        arr[len - 1] = '\0';
        len--; // 更新长度
    }

    // 检查字符串长度是否小于m
    if (len < m) {
        printf("error\n");
    }
    else {
        char* p = arr;
        p += m - 1; // 移动指针到第m个字符
        copystr(p, m); // 调用函数复制字符串
    }
    return 0;
}

void copystr(char* p, int m) {
    while (*p) { // 循环直到字符串结束
        printf("%c", *p);
        p++;
    }
}