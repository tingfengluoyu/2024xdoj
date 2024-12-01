#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int* brr = (int*)malloc(n * sizeof(int));

	for (int i = 1; i < n - 1; i++) {
		brr[i] = (arr[i - 1] + arr[i] + arr[i + 1]) / 3;
	}

	brr[0] = brr[1];
	brr[n - 1] = brr[n - 2];

	for (int i = 0; i < n; i++) {
		printf("%d ", brr[i]);
	}

	free(arr);
	free(brr);
	return 0;
}