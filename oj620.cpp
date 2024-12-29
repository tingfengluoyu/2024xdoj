#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//0<n<=100
	int n = 0;
	scanf("%d", &n);

	//每个数的绝对值都不超过100
	int arr[100] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	//求和
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}

	if (n % 2 == 1) {
		int mid = 0;
		mid = arr[(n - 1) / 2];
		printf("%d Odd %d", sum, mid);
	}
	else {
		double mid = 0.0;
		mid = ((double)arr[n / 2 - 1] + (double)arr[n / 2]) / 2.0;
		printf("%d Even %.2lf", sum, mid);
	}

	return 0;
}