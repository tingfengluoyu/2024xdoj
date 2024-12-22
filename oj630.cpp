#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr[50];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int* array = (int*)malloc(m * sizeof(int));

	for (int i = m - 1; i >= 0; i--) {
		int min = 0;
		for (int j = 0; j < n; j++) {
			if (arr[min] > arr[j]) {
				min = j;
			}
		}

		array[i] = arr[min];
		arr[min] = 10000;
	}

	int count = 0;
	for (int i = 0; i < m; i++) {
		if (count < 4) {
			printf("%d ", array[i]);
			count++;
		}
		else {
			printf("\n");
			printf("%d ", array[i]);
			count = 1;
		}
	}

	free(array);

	return 0;
}