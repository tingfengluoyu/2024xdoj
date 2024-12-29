#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[10];
	scanf("%9s", arr);

	if (strcmp(arr, "0") == 0) {
		printf("0");
		return 0;
	}

	int sum = 0;
	int len = strlen(arr);
	for (int i = 0; i < len; i++) {
		sum += arr[i] - '0';
	}

	int a = 0;
	int num[7] = { 0 };

	while (sum) {
		num[a++] = sum % 2;
		sum /= 2;
	}

	for (int i = a - 1; i >= 0; i--) {
		printf("%d", num[i]);
	}

	return 0;
}