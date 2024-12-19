#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[200];
    char s[101];
    fgets(s, 101, stdin); // 读取一行输入，包括换行符

    size_t len = strlen(s);
    if (len == 0) {
        return 1; // 如果没有输入，直接返回
    }

    // 如果输入的字符串以换行符结尾，移除换行符
    if (s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--; // 更新长度
    }

    char* p = arr; // arr的指针
    char* q = s;   // s的指针

    // 复制字符并在每个字符后添加空格
    for (size_t i = 0; i < len; i++) {
        *p = *q;
        p++;
        *p = ' ';
        p++;
        q++;
    }
    *p = '\0'; // 在arr的末尾添加空字符

    printf("%s", arr); // 打印结果

    return 0;
}