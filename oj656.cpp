#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int factorial(int x);

int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = 0;

	for (int i = 1; i <= n; i++) {
		sum += factorial(i);
	}

	printf("%d\n", sum);

	return 0;
}

int factorial(int x) {
	if (x == 0 || x == 1) {
		return 1;
	}
	int num = 1;
	while (x > 0) {
		num *= x--;
	}
	return num;
}