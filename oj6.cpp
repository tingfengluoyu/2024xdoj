#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct number {
	int num = 0;
	int sum = 0;
};

int main()
{
	//给出的数都是不超过10000的非负整数
	//1<=n<=1000
	int n = 0;
	scanf("%d", &n);

	number arr[1000];

	for (int i = 0; i < n; i++) {
		//读取数字
		scanf("%d", &arr[i].num);
	}

	//计算每个数字的各位数字之和
	for (int i = 0; i < n; i++) {
		int t = arr[i].num;
		while (t) {
			arr[i].sum += t % 10;
			t /= 10;
		}
	}

	//按各位数字之和降序排列，如果和相同，按原数字较小的在前排列
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j].sum < arr[j + 1].sum || arr[j].sum == arr[j + 1].sum && arr[j].num > arr[j + 1].num) {
				number temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//输出排序后的数据
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", arr[i].num, arr[i].sum);
	}

	return 0;
}