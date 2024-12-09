#define _CRT_SECURE_NO_WARNINGS
#define COUNT 10000

#include<stdio.h>

int fun(int x);
int prime(int n);
void print(int x, int arr[], int *len);

int main() 
{
	int x = 0;
	scanf("%d", &x);
	int len = 0;
	int arr[COUNT] = { 0 };

	print(x, arr, &len);

	printf("%d\n", fun(x));
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

int prime(int n) {
	if (n <= 1) {
		return 0;
	}
	if (n <= 3) {
		return 1;
	}
	if (n % 2 == 0 || n % 3 == 0) {
		return 0;
	}
	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return 0;
		}
	}
	return 1;
}

int fun(int x) {
	int count = 0;
	for (int i = 2; i <= x; i++) {
		if (prime(i)) {
			count++;//是素数，个数加1
		}
	}
	return count;
}

void print(int x, int arr[], int *len) {
	*len = 0;
	for (int i = 2; i < x; i++) {
		if (prime(i)) {
			arr[(*len)++] = i;//是素数，存入arr
		}
	}
}