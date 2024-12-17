#define _CRT_SECURE_NO_WARNINGS

#define MAX 100000

#include<stdio.h>

int main()
{
	char arr[MAX];
	scanf("%100000s", arr);

	char* p = arr;
	char* q = arr;
	while (*p) {
		p++;
	}

	printf("%d", p - q);

	return 0;
}