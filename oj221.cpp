#define _CRT_SECURE_NO_WARNINGS
#define COUNT 10000

#include <stdio.h>
#include <string.h>

int count1(char arr[], int len);
int count2(char arr[], int len);

struct number {
    int x;
    int y;
};

int main() {
    char arr[COUNT + 1]; 
    fgets(arr, sizeof(arr), stdin); 

    arr[strcspn(arr, "\n")] = 0;

    int len = strlen(arr);
    struct number a;

    a.x = count1(arr, len);
    a.y = count2(arr, len);

    printf("%d,%d\n", a.x, a.y);

    return 0;
}

int count1(char arr[], int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')) {
            count++;
        }
    }
    return count;
}

int count2(char arr[], int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] >= '0' && arr[i] <= '9') {
            count++;
        }
    }
    return count;
}