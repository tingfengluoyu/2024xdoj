#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cows[n];
    cows[0] = 1;

    for (int i = 1; i < n; i++) {
        if (i < 4) {
            cows[i] = cows[i - 1] + 1;
        } else {
            cows[i] = cows[i - 1] + cows[i - 3];
        }
    }

    printf("%d\n", cows[n - 1]);

    return 0;
}