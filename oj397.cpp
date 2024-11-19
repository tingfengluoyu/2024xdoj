#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100]; // 假设国家名不超过99个字符
    int count;
} Country;

int main() {
    int n = 0;
    scanf("%d", &n);
    Country countries[100]; // 假设国家数不超过100

    for (int i = 0; i < n; i++) {
        scanf("%s %d", countries[i].name, &countries[i].count);
    }

    // 冒泡排序
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (countries[j].count < countries[j + 1].count) {
                Country temp = countries[j];
                countries[j] = countries[j + 1];
                countries[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s %d\n", countries[i].name, countries[i].count);
    }
    return 0;
}