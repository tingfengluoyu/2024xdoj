#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<cmath>

int prime(int n);

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[40];
	arr[0] = 1;
	arr[1] = 1;

	for (int i = 2; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	if (prime(arr[n - 1]) == 0) {
		printf("yes");
	}
	else {
		printf("%d", arr[n - 1]);
	}

	return 0;
}

int prime(int n) {
	if (n == 2) {
		return 0; // 2是素数
	}
	if (n % 2 == 0) {
		return 1; // 排除偶数（除了2）
	}
	for (int i = 3; i * i <= n; i += 2) {
		if (n % i == 0) {
			return 1; // 如果n能被i整除，则n不是素数
		}
	}
	return 0; // 如果没有找到因数，则n是素数
}