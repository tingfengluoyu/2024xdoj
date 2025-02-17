#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<string.h>

int fun(int n);

int main()
{
	char arr[101];
	fgets(arr, 101, stdin);
	arr[strlen(arr)] = '\0';

	int n = 0;
	char* p = arr;
	while (*p) {
		if (*p >= '0' && *p <= '9') {
			n = n * 10 + *p - '0';
		}
		p++;
	}

	int a = fun(n);
	if (a == 1) {
		int max = 0;
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				max = i;
			}
		}
		printf("%d\n", max);
	}
	else {
		printf("%d\n", n);
	}

	return 0;
}

int fun(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 1;//表示不是素数
		}
	}
	return 0;//表示是素数
}