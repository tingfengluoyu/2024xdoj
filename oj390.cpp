#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

unsigned long long fact(int n);

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%llu ", fact(i));
	}
	
	return 0;
}

unsigned long long fact(int n) {
	unsigned long long sum = 1;
	while (n > 0) {
		sum *= n--;
	}
	return sum;
}