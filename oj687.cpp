#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	int arr[50] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int sum = 0;
	int max = 0;
	int min = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[i];
		if (arr[max] < arr[i]) {
			max = i;
		}
		if (arr[min] > arr[i]) {
			min = i;
		}
	}

	printf("%d %d %d %d %d", sum, arr[max], max + 1, arr[min], min + 1);

	return 0;
}