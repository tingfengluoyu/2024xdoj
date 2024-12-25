#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct student {
    char code[6];
    char name[11];
    int a, b, c;
};

int main() {
    int n = 0;
    scanf("%d", &n); // ��ȡѧ������
    getchar(); // ���ջ��з�
    struct student students[10];
    int arr[10] = { 0 };

    for (int i = 0; i < n; i++) {
        char input[50]; // ����һ�����벻����50���ַ�
        fgets(input, sizeof(input), stdin); // ��ȡ��������

        // �Ƴ������ַ���ĩβ�Ļ��з�
        input[strcspn(input, "\n")] = 0;

        // ʹ��sscanf�������н���ѧ�š������ͳɼ�
        // ע�⣺��%5s������Ͽո�����ȷ�ָ������ֶ�
        sscanf(input, "%5s %10s %d %d %d", students[i].code, students[i].name, &students[i].a, &students[i].b, &students[i].c);
        arr[i] = students[i].a + students[i].b + students[i].c;
    }

    int max = 0;
    for (int i = 1; i < n; i++) { // ��1��ʼ����Ϊmax�Ѿ���ʼ��Ϊ0
        if (arr[max] < arr[i]) {
            max = i;
        }
    }

    printf("%s %s %d\n", students[max].name, students[max].code, arr[max]);

    return 0;
}