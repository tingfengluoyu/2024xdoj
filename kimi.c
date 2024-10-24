#include <stdio.h>

int main() {
    char ch;  // 使用更描述性的变量名
    scanf("%c", &ch);  // 读取一个字符

    if (ch >= 'A' && ch <= 'Z') {  // 大写字母
        printf("%c\n", ch + 'a' - 'A');  // 转换为小写字母并输出
    } else if (ch >= 'a' && ch <= 'z') {  // 小写字母
        printf("%c\n", ch - 'a' + 'A');  // 转换为大写字母并输出
    } else if (ch >= '0' && ch <= '9') {  // 数字
        printf("%c\n", ch);  // 直接输出数字
    } else {  // 其他字符
        printf("%c是其他字符\n", ch);  // 输出该字符，并说明是其他字符
    }

    return 0;
}