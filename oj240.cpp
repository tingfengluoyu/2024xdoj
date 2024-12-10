#define _CRT_SECURE_NO_WARNINGS
#define COUNT 10000

#include<stdio.h>

void change(int x, char arr[], int* i);

int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	char arr[COUNT] = { '\0' };
	char array[COUNT] = { '\0' };

	if (n < 0) {
		change(-n, arr, &i);
		array[0] = '-';
		for (int j = 0; j < i; j++) {
			array[j + 1] = arr[i - 1 - j];
		}
		array[i + 1] = '\0';
	}
	else {
		change(n, arr, &i);
		for (int j = 0; j < i; j++) {
			array[j] = arr[i - 1 - j];
		}
		array[i] = '\0';
	}
	
	printf("%s\n", array);

	return 0;
}

void change(int x, char arr[], int* i) {
	arr[(*i)++] = x % 10 + '0';
	x /= 10;
	if (x > 0) {
		change(x, arr, i);
	}
}