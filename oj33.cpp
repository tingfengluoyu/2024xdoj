#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

double function(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%f\n", function(n));
	return 0;
}

double function(int n) {
	if (n == 1) {
		 return 1.0;
	}
	else {
		return 1.0 / (1.0 + function(n - 1));
	}
}