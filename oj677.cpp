#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	double x = 0;
	scanf("%d %lf", &n, &x);
	double arr[10] = { 0.0 };
	double sum = 0.0;

	arr[0] = 1.0;
	arr[1] = x;

	for (int i = 2; i <= n; i++) {
		arr[i] = ((double)(2 * i - 1) * x * arr[i - 1] - (double)(i - 1) * arr[i - 2]) / (double)i;
	}

	for (int i = 1; i <= n; i++) {
		sum += arr[i];
	}

	printf("%.4lf", sum);

	return 0;
}