#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[6]; // 需要增加一个额外的空间来存储最后的 '\0'
	fgets(arr, 6, stdin); // 读取5个字符加上最后的 '\0'

	// 将 arr[4] 从换行符转换为 '\0'
	if (arr[4] == '\n') {
		arr[4] = '\0';
	}
	else {
		// 如果输入超过4个字符，截断多余的字符
		arr[5] = '\0';
	}

	for (int i = 0; i < 4; i++) {
		if (arr[i] >= 'A' && arr[i] <= 'Z') {
			arr[i] += 'a' - 'A';
		}
		else if (arr[i] >= 'a' && arr[i] <= 'z') {
			arr[i] += 'A' - 'a';
		}
		else if (arr[i] >= '0' && arr[i] <= '9') {
			arr[i] = '*';
		}
		else {
			arr[i] = '@';
		}
	}

	printf("%4s\n", arr);

	return 0;
}