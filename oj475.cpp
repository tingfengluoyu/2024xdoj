#include <stdio.h>
#include <string.h>
#include <ctype.h> // 用于tolower函数

int main() {
    char arr[81], brr[81];
    scanf("%80s", arr); // 读取不超过80个字符的字符串

    printf("%s\n", arr); // 输出输入的字符串

    int len = strlen(arr);
    int t = len - 1;
    for (int i = 0; i < len; i++) {
        brr[i] = arr[t--]; // 从后向前复制字符
    }
    brr[len] = '\0'; // 确保brr是null-terminated的字符串

    // 忽略大小写比较字符串是否相等
    int isPalindrome = 1; // 假设字符串是回文
    for (int i = 0; i < len; i++) {
        if (tolower(arr[i]) != tolower(brr[i])) {
            isPalindrome = 0; // 如果有不匹配的字符，不是回文
            break;
        }
    }

    if (isPalindrome) {
        printf("Yes\n"); // 是回文
    } else {
        printf("No\n"); // 不是回文
    }

    return 0;
}