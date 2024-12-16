#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[10] = { 0 };

	int i = 0;
	while (n > 0) {
		arr[i++] = n % 10;
		n /= 10;
	}

	int start = 0;
	int end = i - 1;

	while (start < end) {
		if (arr[start++] != arr[end--]) {
			printf("no");
			return 0;
		}
	}

	int sum = 0;
	for (int j = 0; j < i; j++) {
		sum += arr[j];
	}

	printf("%d\n", sum);

	return 0;
}