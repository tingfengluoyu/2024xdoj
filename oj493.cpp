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
    scanf("%d", &n); // 读取学生数量
    getchar(); // 吸收换行符
    struct student students[10];
    int arr[10] = { 0 };

    for (int i = 0; i < n; i++) {
        char input[50]; // 假设一行输入不超过50个字符
        fgets(input, sizeof(input), stdin); // 读取整行输入

        // 移除输入字符串末尾的换行符
        input[strcspn(input, "\n")] = 0;

        // 使用sscanf从输入中解析学号、姓名和成绩
        // 注意：在%5s后面加上空格，以正确分割输入字段
        sscanf(input, "%5s %10s %d %d %d", students[i].code, students[i].name, &students[i].a, &students[i].b, &students[i].c);
        arr[i] = students[i].a + students[i].b + students[i].c;
    }

    int max = 0;
    for (int i = 1; i < n; i++) { // 从1开始，因为max已经初始化为0
        if (arr[max] < arr[i]) {
            max = i;
        }
    }

    printf("%s %s %d\n", students[max].name, students[max].code, arr[max]);

    return 0;
}