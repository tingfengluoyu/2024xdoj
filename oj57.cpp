#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int fib(int x);

int main()
{
	int n = 0;
	scanf("%d", &n);

	int a = fib(n);

	printf("%d", a);

	return 0;
}

int fib(int x){
	int arr[41];
	arr[0] = 7;
	arr[1] = 11;
	for (int i = 2; i <= x; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[x];
}