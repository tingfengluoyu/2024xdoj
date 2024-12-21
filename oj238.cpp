#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int arr[4][5];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int found = 0;

	for (int i = 0; i < 4; i++) {
		int max = 0;//一行中的最大值
		int x = 0;
		for (int j = 0; j < 5; j++) {
			if (arr[i][max] < arr[i][j]) {
				max = j;//最大值的列
				x = i;//最大值的行
			}
		}

		int min = 0;//最大值列中的最小值
		for (int j = 0; j < 4; j++) {
			if (arr[min][max] > arr[j][max]) {
				min = j;//最大值列中的最小值所在行
			}	
		}

		if (min == x) {
			found = 1;
			printf("%d %d %d\n", arr[x][max], x + 1, max + 1);
		}
	}

	if (found == 0) {
		printf("鞍点不存在\n");
	}

	return 0;
}