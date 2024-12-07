#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int recursion(int x);

int main()
{
	int n = 0;
	scanf("%d", &n);

	int a = recursion(n);

	printf("%d\n", a);

	return 0;
}

int recursion(int x) {
    int sum = 0;
    if (x < 10) {
        return x;
    }
    else {
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        return recursion(sum);
    }
}