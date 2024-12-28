#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	//1<=n<=30
	scanf("%d", &n);
	int arr[30];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	if (n % 2 == 1) {
		int mid = (n - 1) / 2;
		for (int i = 0; i < mid; i++) {
			int t = arr[i];
			arr[i] = arr[mid + i + 1];
			arr[mid + i + 1] = t;
		}
	}
	else {
		int mid = n / 2;
		for (int i = 0; i < mid; i++) {
			int t = arr[i];
			arr[i] = arr[mid + i];
			arr[mid + i] = t;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}