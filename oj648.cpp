#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[10];
	scanf("%s", arr);
	int len = strlen(arr);
	arr[len] = '\0';

	int sum = 0;
	int x = 0;

	for (int i = 0; i < len; i++) {
		sum += arr[i] - '0';
	}

	if (sum % 2 == 0) {
		x = 1;
	}

	printf("%d %d %d\n", len, sum, x);

	return 0;
}