#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);

    int sum = n * n * n;
    int start = (sum - n) / 2 + 1;

    for (int i = 0; i < n; i++) {
        printf("%d ", start + 2 * i);
    }
    printf("\n");

    return 0;
}