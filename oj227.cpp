#define _CRT_SECURE_NO_WARNINGS
#define COUNT 10000

#include<stdio.h>
#include<string.h>

int fun(char arr[]);

int main() 
{
	char arr[COUNT + 1];
	fgets(arr, sizeof(arr), stdin);
	arr[strcspn(arr, "\n")] = 0;
	

	printf("%d", fun(arr));

	return 0;
}

int fun(char arr[]) {
	int count = 0;
	int len = strlen(arr);
	for (int i = 0; i < len; i++) {
		if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z') {
			count++;
		}
	}
	return count;
}