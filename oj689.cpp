#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int count = 0;
	char arr1[4];
	char arr2[51];
	scanf("%3s", arr1);
	scanf("%50s", arr2);

	int len1 = strlen(arr1);
	int len2 = strlen(arr2);

	for (int i = 0; i <= len2 - len1; i++) {
		if (strncmp(arr2 + i, arr1, len1) == 0) {
			count++;
		}
	}
	
	printf("%d\n", count);

	return 0;
}