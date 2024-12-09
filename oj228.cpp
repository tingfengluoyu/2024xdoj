#define _CRT_SECURE_NO_WARNINGS
#define COUNT 10000

#include<stdio.h>
#include<string.h>
void fun(char arr[], char array[]);

int main()
{
	char arr[COUNT + 1] = {'\0'};
	char array[COUNT + 1] = { '\0' };
	scanf("%10000s", arr);

	fun(arr,array);

	printf("%s", array);

	return 0;
}

void fun(char arr[], char array[]) {
	int a = 0;
	for (int i = 0; i < strlen(arr); i += 2) {
		array[a++] = arr[i];
	}
	array[a] = '\0';
}