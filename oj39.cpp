#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);

    int arr[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int found = 0;

    for (int i = 0; i < m && !found; i++) {
        int min = arr[i][0];
        int x = 0;
        for (int j = 0; j < n; j++) {
            if (min > arr[i][j]) {
                min = arr[i][j];
                x = j;
            }
        }

        int max = arr[0][x];
        int y = x;
        for (int t = 0; t < m; t++) {
            if (max < arr[t][x]) {
                max = arr[t][x];
                y = t;
            }
        }

        if (min == max) {
            found = 1;
            printf("%d %d %d\n", i, x, max);
        }
    }

    if (found == 0) {
        printf("no\n");
    }

    return 0;
}