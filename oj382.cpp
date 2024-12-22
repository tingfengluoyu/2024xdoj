#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);

	int arr[100][100] = { 0 };
	int array[100][100] = { 0 };

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int k = m - 1;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			array[i][j] = arr[j][k];
		}
		k--;
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}

	return 0;
}