#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int* arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		arr[i] = 1;
	}

	for (int i = 2; i <= m; i++) {
		for (int j = 0; j < n; j++) {
			if ((j + 1) % i == 0) {
				arr[j] = -arr[j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] == 1) {
			printf("%d ", i + 1);
		}
	}

	printf("\n");
	free(arr);
	return 0;
}