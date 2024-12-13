#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[100] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int sum = 0;
	for (int i = 0; i < n - 1; i++) {
		sum += lcm(arr[i], arr[i + 1]);
	}

	printf("%d\n", sum);

	return 0;
}

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b) {
	return (a * b) / (gcd(a, b));
}