#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[1001];
	scanf("%1000s", arr);

	int len = strlen(arr);

	for (int i = 0; i < len; i++) {
		if (arr[i] >= 'a' && arr[i] <= 'z') {
			arr[i] = ((arr[i] - 'a' + 4) % 26) + 'a';
		}
		else if (arr[i] >= 'A' && arr[i] <= 'Z') {
			arr[i] = ((arr[i] - 'A' + 4) % 26) + 'A';
		}
	}

	printf("%s", arr);

	return 0;
}