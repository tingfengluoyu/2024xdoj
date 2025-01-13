#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void count(char p[], char q[][9], int num_words);

int main() {
    char string[101];
    char words[10][9]; // ���������10����ͳ�Ƶ���
    int num_words = 0;

    // ��ȡ���ַ���
    fgets(string, 101, stdin);
    string[strcspn(string, "\n")] = '\0'; // ȥ�����з�

    // ��ȡ�����ͳ�Ƶ���
    while (num_words < 10) {
        if (fgets(words[num_words], 9, stdin) == NULL || strcmp(words[num_words], "\n") == 0) {
            break;
        }
        words[num_words][strcspn(words[num_words], "\n")] = '\0'; // ȥ�����з�
        num_words++;
    }

    count(string, words, num_words);

    return 0;
}

void count(char p[], char q[][9], int num_words) {
    int len_p = strlen(p);
    int counts[10] = { 0 }; // ���ڴ洢ÿ�����ʵĳ��ִ���

    // ת�����ַ���ΪСд
    for (int i = 0; i < len_p; i++) {
        p[i] = tolower(p[i]);
    }

    // ����ÿ����ͳ�Ƶ��ʳ��ֵĴ���
    for (int w = 0; w < num_words; w++) {
        int len_q = strlen(q[w]);
        // ת����ͳ�Ƶ���ΪСд
        for (int i = 0; i < len_q; i++) {
            q[w][i] = tolower(q[w][i]);
        }

        // �����Ӵ����ֵĴ���
        for (int i = 0; i <= len_p - len_q; i++) {
            // ʹ�� strncmp �Ƚ����ַ���
            if (strncmp(&p[i], q[w], len_q) == 0) {
                // ���ƥ��λ�õ�ǰ���Ƿ��ǵ��ʱ߽�
                if ((i == 0 || p[i - 1] == ' ') && (i + len_q == len_p || p[i + len_q] == ' ')) {
                    counts[w]++;
                }
            }
        }
    }

    // ���ÿ�����ʼ�����ִ���
    for (int w = 0; w < num_words; w++) {
        if (strlen(q[w]) > 0) { // ȷ��ֻ���ʵ�ʱ���ȡ�ĵ���
            printf("%s %d\n", q[w], counts[w]);
        }
    }
}