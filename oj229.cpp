#define _CRT_SECURE_NO_WARNINGS
#define COUNT 10000

#include<stdio.h>
#include<string.h>

void fun(char arr[], char brr[], char print[]);

int main()
{
	char arr[COUNT + 1] = { '\0' };
	char brr[COUNT + 1] = { '\0' };
	char print[2 * COUNT + 2] = { '\0' };
	scanf("%10000s", arr);
	scanf("%10000s", brr);

	fun(arr, brr, print);

	printf("%s", print);

	return 0;
}

void fun(char arr[], char brr[], char print[]) {
	int i = 0;
	// 复制第一个字符串arr到print
	while (arr[i] != '\0') {
		print[i] = arr[i];
		i++;
	}
	int index = 0;
	// 复制第二个字符串brr到print
	while (brr[index] != '\0') {
		print[i] = brr[index++];
		i++;
	}
	print[i] = '\0';
}