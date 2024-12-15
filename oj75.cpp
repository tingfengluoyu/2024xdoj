#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct count {
	int num, x;
};

int main()
{
	int m = 0;//ÁÐ
	int n = 0;//ÐÐ
	scanf("%d %d", &m, &n);

	struct count counts[16] = { { 0,0 } };

	int arr[257][257];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
			if (arr[i][j] < 16) {
				counts[arr[i][j]].num = arr[i][j];
				counts[arr[i][j]].x++;
			}
		}
	}

	for (int i = 0; i < 16;i++) {
		if (counts[i].x != 0) {
			printf("%d %d\n", counts[i].num, counts[i].x);
		}
	}

	return 0;
}