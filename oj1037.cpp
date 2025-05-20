#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_WORD_LEN 20
#define BUFFER_SIZE 100000

typedef struct {
    char word[MAX_WORD_LEN + 1];
    int count;
} WordEntry;

WordEntry* words = NULL;
int num_words = 0;

// �ж��ַ��Ƿ��Ƿָ���
bool is_delimiter(char c) {
    return c == ',' || c == '.' || c == '?' || c == '!' || isspace(c);
}

// ����ַ����Ƿ������ĸ��'���
bool is_valid_chars(const char* word) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] != '\'' && !isalpha(word[i])) {
            return false;
        }
    }
    return true;
}

// ����ַ����Ƿ�ȫ����ĸ���
bool is_all_alpha(const char* word) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (!isalpha(word[i])) {
            return false;
        }
    }
    return true;
}

// ��̬�������ַ���
char* copy_substr(const char* src, int len) {
    char* dest = (char*)malloc(len + 1);
    if (dest) {
        strncpy(dest, src, len);
        dest[len] = '\0';
    }
    return dest;
}

void add_word(const char* word) {
    if (strlen(word) == 0 || strlen(word) > MAX_WORD_LEN) return;

    // ����Ƿ��Ѵ���
    for (int i = 0; i < num_words; i++) {
        if (strcmp(words[i].word, word) == 0) {
            words[i].count++;
            return;
        }
    }

    // ��̬��չ����
    WordEntry* temp = (WordEntry*)realloc(words, (num_words + 1) * sizeof(WordEntry));
    if (!temp) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    words = temp;
    strncpy(words[num_words].word, word, MAX_WORD_LEN);
    words[num_words].word[MAX_WORD_LEN] = '\0';
    words[num_words].count = 1;
    num_words++;
}

void process_word(const char* word) {
    int len = strlen(word);
    if (!is_valid_chars(word)) return;

    // ����'s�����
    if (len >= 2 && word[len - 2] == '\'' && word[len - 1] == 's') {
        char* prefix = copy_substr(word, len - 2);
        if (is_all_alpha(prefix)) {
            add_word(prefix);
        }
        free(prefix);
        add_word("is");
    }
    // ����'m�����
    else if (len >= 2 && word[len - 2] == '\'' && word[len - 1] == 'm') {
        char* prefix = copy_substr(word, len - 2);
        if (is_all_alpha(prefix)) {
            add_word(prefix);
        }
        free(prefix);
        add_word("am");
    }
    // ����'re�����
    else if (len >= 3 && word[len - 3] == '\'' && word[len - 2] == 'r' && word[len - 1] == 'e') {
        char* prefix = copy_substr(word, len - 3);
        if (is_all_alpha(prefix)) {
            add_word(prefix);
        }
        free(prefix);
        add_word("are");
    }
    // ��ͨ����
    else {
        if (strchr(word, '\'') == NULL && is_all_alpha(word)) {
            add_word(word);
        }
    }
}

int compare(const void* a, const void* b) {
    return strcmp(((const WordEntry*)a)->word, ((const WordEntry*)b)->word);
}

int main() {
    char buffer[BUFFER_SIZE];
    int idx = 0;
    int c;

    // ��ȡ����ֱ��#����
    while ((c = getchar()) != '#' && c != EOF && idx < BUFFER_SIZE - 1) {
        buffer[idx++] = tolower(c);
    }
    buffer[idx] = '\0';

    // �ָ��
    char* p = buffer;
    while (*p) {
        // �����ָ���
        while (*p && is_delimiter(*p)) p++;
        if (!*p) break;

        // �ҵ����ʱ߽�
        char* start = p;
        while (*p && !is_delimiter(*p)) p++;

        // ��ȡ����
        char* word = copy_substr(start, p - start);
        process_word(word);
        free(word);
    }

    // �������
    qsort(words, num_words, sizeof(WordEntry), compare);
    printf("%d\n", num_words);
    for (int i = 0; i < num_words; i++) {
        printf("%s %d\n", words[i].word, words[i].count);
    }

    // �ͷ��ڴ�
    free(words);
    return 0;
}