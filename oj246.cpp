#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void count(char p[], char q[][9], int num_words);

int main() {
    char string[101];
    char words[10][9]; // 假设最多有10个待统计单词
    int num_words = 0;

    // 读取主字符串
    fgets(string, 101, stdin);
    string[strcspn(string, "\n")] = '\0'; // 去除换行符

    // 读取多个待统计单词
    while (num_words < 10) {
        if (fgets(words[num_words], 9, stdin) == NULL || strcmp(words[num_words], "\n") == 0) {
            break;
        }
        words[num_words][strcspn(words[num_words], "\n")] = '\0'; // 去除换行符
        num_words++;
    }

    count(string, words, num_words);

    return 0;
}

void count(char p[], char q[][9], int num_words) {
    int len_p = strlen(p);
    int counts[10] = { 0 }; // 用于存储每个单词的出现次数

    // 转换主字符串为小写
    for (int i = 0; i < len_p; i++) {
        p[i] = tolower(p[i]);
    }

    // 查找每个待统计单词出现的次数
    for (int w = 0; w < num_words; w++) {
        int len_q = strlen(q[w]);
        // 转换待统计单词为小写
        for (int i = 0; i < len_q; i++) {
            q[w][i] = tolower(q[w][i]);
        }

        // 查找子串出现的次数
        for (int i = 0; i <= len_p - len_q; i++) {
            // 使用 strncmp 比较子字符串
            if (strncmp(&p[i], q[w], len_q) == 0) {
                // 检查匹配位置的前后是否是单词边界
                if ((i == 0 || p[i - 1] == ' ') && (i + len_q == len_p || p[i + len_q] == ' ')) {
                    counts[w]++;
                }
            }
        }
    }

    // 输出每个单词及其出现次数
    for (int w = 0; w < num_words; w++) {
        if (strlen(q[w]) > 0) { // 确保只输出实际被读取的单词
            printf("%s %d\n", q[w], counts[w]);
        }
    }
}