#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int arr[2000] = { 0 };
	int n = 0;
	scanf("%d %d %d", &arr[0], &arr[1], &n);

	int* a = &arr[1];
	for (int i = 1; i < n; i++) {
		int t = arr[i - 1] * arr[i];
		if (t < 10) {
			*(a + 1) = t;
			a++;
		}
		else {
			*(a + 2) = t % 10;
			*(a + 1) = t / 10;
			a += 2;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}