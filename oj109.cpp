#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[101];
	scanf("%100s", arr);

	int len = strlen(arr);

	char a = arr[0];
	int b = 0;

	for (int i = 1; i < len; i++) {
		if (arr[i] > a) {
			char t = arr[i];
			arr[i] = arr[b];
			arr[b] = t;
			b++;
		}
	}

	for (int i = b; i < len - 1; i++) {
		for (int j = b; j < len - 1 - (i - b); j++) {
			if (arr[j] > arr[j + 1]) {
				char t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}

	for (int i = len - 1; i > b; i--) {
		arr[i] = arr[i - 1];
	}
	arr[b] = a;

	printf("%s\n", arr);

	return 0;
}