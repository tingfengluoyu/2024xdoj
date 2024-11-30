#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[30];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int count = 0;

	for (int i = 0; i < n - 2; i++) {
		if (arr[i] + arr[i + 1] > arr[i + 2] && arr[i] + arr[i + 2] > arr[i + 1] && arr[i + 1] + arr[i + 2] > arr[i]) {
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}