#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//0<n<=1000
	int n = 0;
	scanf("%d", &n);

	int count[10] = { 0 };
	int t = 0;

	for (int i = 0; i < n; i++) {
		//读取每一个数字并统计其各位数字的出现次数,每个数字都不超过整形范围
		scanf("%d", &t);
		//对输入的数字是0进行特殊处理
		if (t == 0) {
			count[0]++;
			continue;
		}
		while (t) {
			count[t % 10]++;
			t /= 10;
		}
	}

	//统计出现次数的最大值
	int max = 0;
	for (int i = 0; i < 10; i++) {
		if (max < count[i]) {
			max = count[i];
		}
	}

	//输出统计的所有最大值
	printf("%d: ", max);
	for (int i = 0; i < 10; i++) {
		if (count[i] == max) {
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}