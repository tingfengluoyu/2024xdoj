#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	//读取ISBN号码并将数字字符转换为整型数字存储
	char arr[20];
	scanf("%19s", arr);
	int array[10] = { 0 };
	int a = 0;
	int len = strlen(arr);
	for (int i = 0; i < len; i++) {
		if (arr[i] >= '0' && arr[i] <= '9') {
			array[a++] = arr[i] - '0';
		}
	}

	int end = (arr[len - 1] >= '0' && arr[len - 1] <= '9') ? arr[len - 1] - '0' : 10;
	int sum = 0;
	
	if (end == 10) {
		for (int i = 0; i < a; i++) {
			sum += array[i] * (i + 1);
		}
	}
	else {
		for (int i = 0; i < a - 1; i++) {
			sum += array[i] * (i + 1);
		}
	}

	int judge = sum % 11;
	
	if (judge == end) {
		printf("Right\n");
	}
	else {
		int right = (judge == 10) ? 'X' : judge + '0';
		arr[len - 1] = right;
		arr[len] = '\0';
		printf("%s\n", arr);
	}

	return 0;
}