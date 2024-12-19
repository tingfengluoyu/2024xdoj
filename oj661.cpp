#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[20];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int* max = arr;
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[i];
		if (*max < arr[i]) {
			max = &arr[i];
		}
	}

	printf("%d %d %ld", sum, *max, (long)(max - arr));

	return 0;
}