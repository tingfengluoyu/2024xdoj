#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int arr[16][16];
	int brr[16][16];
	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			scanf("%d", &arr[i][j]);
			brr[i][j] = arr[i][j];
		}
	}

	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {

			int sum = 0;
			for (int k = i - 1; k < i + 2; k++) {
				for (int t = j - 1; t < j + 2; t++) {
					sum += arr[k][t];
				}
			}

			brr[i][j] = sum / 9;
		}
	}

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			printf("%d ", brr[i][j]);
		}
		printf("\n");
	}

	return 0;
}