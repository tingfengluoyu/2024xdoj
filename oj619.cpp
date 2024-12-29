#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	//0<n<50
	int n = 0;
	scanf("%d", &n);

	//每个数字串长度不超过10,求和最大值不超过81
	char arr[50][10] = { 0 };
	//sum数组存储数字串每位求和结果
	int sum[50] = { 0 };

	//读取数字串并求和
	for (int i = 0; i < n; i++) {
		scanf("%9s", arr[i]);
		int len = strlen(arr[i]);
		for (int j = 0; j < len; j++) {
			sum[i] += arr[i][j] - '0';
		}
	}

	//找出每位求和值最大的那个，如果有多个最大求和值，选择数值大的那个
	int max = 0;
	for (int i = 0; i < n; i++){
		if (sum[max] < sum[i]) {
			max = i;
		}
	}

	//统计求和值为最大值的数字串个数
	int count = 0;
	int found[50] = { 0 };
	for (int i = 0; i < n; i++) {
		if (sum[max] == sum[i]) {
			count++;
			found[i] = 1;
		}
	}

	if (count == 1) {
		printf("%s", arr[max]);
	}
	else {
		int num[50] = { 0 };
		for (int i = 0; i < n; i++) {
			if (found[i] == 1) {
				for (int j = 0; j < strlen(arr[i]); j++) {
					num[i] = num[i] * 10 + arr[i][j] - '0';
				}
			}
		}

		max = 0;
		for (int i = 0; i < n; i++) {
			if (num[max] < num[i]) {
				max = i;
			}
		}

		printf("%s", arr[max]);
	}

	return 0;
}