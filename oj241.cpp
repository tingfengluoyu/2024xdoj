#define _CRT_SECURE_NO_WARNINGS
#define COUNT 10000

#include <stdio.h>
#include<string.h>

int main() {
    char arr[COUNT] = { '\0' }; // 16½øÖÆ×Ö·û´®
    scanf("%10000s", arr);

    long long count = 1;
    long long sum = 0;
    for (int i = strlen(arr) - 1; i >= 0; i--) {
        if (arr[i] >= '0' && arr[i] <= '9') {
            sum += (long long)(arr[i] - '0') * count;
        }
        else if (arr[i] >= 'a' && arr[i] <= 'z') {
            sum += (long long)(arr[i] - 'a' + 10) * count;
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z') {
            sum += (long long)(arr[i] - 'A' + 10) * count;
        }
        count *= 16;
    }

    printf("%lld", sum);

    return 0;
}