#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[51];
	scanf("%50s", arr);
	int len = strlen(arr);
	

	for (int i = 0; i < len; i++) {
		if (arr[i] >= 'A' && arr[i] <= 'Z') {
			arr[i] += 32;
		}
	}

	int start = 0;
	int end = len - 1;
	int judge = 0;

	while (start < end) {
		if (arr[start] != arr[end]) {
			judge = 1;
			printf("no\n");
			break;
		}
		start++;
		end--;
	}

	if (judge == 0) {
		printf("yes\n");
	}
	
	return 0;
}