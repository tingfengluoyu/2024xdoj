#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<cmath>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int m = (int)pow(2, n) - 1;

	int prime = 1;

	for (int i = 2; i < (int)sqrt((double)m); i++ ) {
		if (m % i == 0) {
			prime = 0;//不是素数，prime为1
			break;
		}
	}

	if (prime) {//是素数
		printf("%d 1\n", m);
	}
	else {//不是素数
		printf("%d 0\n", m);
	}
	return 0;
}