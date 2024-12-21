#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{                  //0 1 2 3   4 5   6 7 8 9
	int array[10] = {1,2,3,4,  5,6,  7,8,9,10};
	int arr[10] = { 0 };
	int p = 0;
	scanf("%d", &p);

	for (int i = 0; i <= p; i++) {
		arr[9 - p + i] = array[i];
	}

	for (int i = 0; i < 9 - p; i++) {
		arr[i] = array[p + 1 + i];
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}