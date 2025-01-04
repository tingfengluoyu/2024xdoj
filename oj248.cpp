#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main()
{
	int m = 0; //m表示首次买入股票数量（0<m<10000）
	int p = 0; //p表示首次买入价格(0<p<=100)
	int n = 0;//n表示之后进行股票交易的天数（0<n<50）
	scanf("%d %d %d", &m, &p, &n);
	int arr[50][2];
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	int money = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i][0] < 0) {
			money += fabs(arr[i][0]) * arr[i][1];
			m -= fabs(arr[i][0]);
		}
		else {
			money -= arr[i][0] * arr[i][1];
			m += arr[i][0];
		}
	}

	money += m * arr[n - 1][1];

	printf("%d\n", money);

	return 0;
}