#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[100];
	scanf("%50s", arr);
	int len = strlen(arr);

	int max = 0;
	for (int i = 0; i < len; i++) {
		if (arr[max] < arr[i]) {
			max = i;
		}
	}

	for (int i = len; i > max; i--) {
		arr[i + 1] = arr[i];
	}

	arr[max + 1] = '*';
	arr[len + 1] = '\0';

	printf("%s", arr);

	return 0;
}