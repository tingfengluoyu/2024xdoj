#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	int arr[20] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int sum = 0;
	int i = 0;

	while (i < n) {
		sum += arr[i] % 10;
		arr[i] /= 10;
		if (arr[i] == 0) {
			i++;
		}
	}

	printf("%d", sum % 10);

	return 0;
}