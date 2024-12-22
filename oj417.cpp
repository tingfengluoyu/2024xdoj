#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[101];
	fgets(arr, 101, stdin);
	arr[strcspn(arr, "\n")] = '\0';
	int len = strlen(arr);

	int count1 = 0;
	int count2 = 0;
	int count3 = 0;

	for (int i = 0; i < len; i++) {
		if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z') {
			count1++;
		}
		else if (arr[i] >= '0' && arr[i] <= '9') {
			count2++;
		}
		else {
			count3++;
		}
	}

	printf("%d %d %d", count1, count2, count3);

	return 0;
}