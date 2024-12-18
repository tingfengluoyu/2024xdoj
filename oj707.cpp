#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isSubstring(const char* mainStr, const char* subStr, int mainLen, int subLen) {
    int i, j;
    for (i = 0; i <= mainLen - subLen; i++) {
        for (j = 0; j < subLen; j++) {
            if (mainStr[i + j] != subStr[j]) {
                break;
            }
        }
        if (j == subLen) {
            return true; // 子串全部匹配
        }
    }
    return false; // 子串没有全部匹配
}

int main() {
    char mainStr[21];
    char subStr[21];

    // 读取主字符串和子字符串
    fgets(mainStr, 21, stdin);
    fgets(subStr, 21, stdin);

    // 移除换行符
    mainStr[strcspn(mainStr, "\n")] = 0;
    subStr[strcspn(subStr, "\n")] = 0;

    int mainLen = strlen(mainStr);
    int subLen = strlen(subStr);

    // 判断子串是否在主串中
    int position = 0;
    bool found = false;
    for (position = 0; position <= mainLen - subLen; position++) {
        if (strncmp(&mainStr[position], subStr, subLen) == 0) {
            found = true;
            break;
        }
    }

    if (found) {
        printf("%d\n", position + 1); // 输出子串在父串的起始位置（从1开始计数）
    }
    else {
        printf("No!\n"); // 不是子串
    }

    return 0;
}