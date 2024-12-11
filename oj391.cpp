#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void fib(int n, int arr[]);

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[40] = { 0 };
	arr[0] = 1;
	arr[1] = 1;

	if (n > 2) {
		fib(n, arr);
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

void fib(int n, int arr[]) {
	for (int i = 2; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
}