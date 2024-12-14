#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int sigma(int x) {
	int sum = 0;
	while (x > 0) {
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main()
{
	char arr[10];
	scanf("%9s", arr);
	int len = strlen(arr);
	int sum = 0;
	
	for (int i = 0; i < len; i++) {
		sum += arr[i] - '0';
	}

	while (sum >= 10) {
		sum = sigma(sum);
	}

	printf("%d\n", sum);
	
	return 0;
}

