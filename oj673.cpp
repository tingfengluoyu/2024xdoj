#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int a = n;
	int len = 0;
	
	while (a > 0){
		len++;
		a /= 10;
	}

	int weishu = pow(10, len);
	int square = n * n;

	if (square % weishu == n) {
		printf("%d %d", n, 1);
	}
	else {
		printf("%d %d", n, 0);
	}

	return 0;
}