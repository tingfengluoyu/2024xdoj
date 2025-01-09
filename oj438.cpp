#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int arr[100][100];
	int brr[100][100];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &brr[i][j]);
		}
	}
	
	int count = 0;
	double same = 0.0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == brr[i][j]) {
				count++;
			}
		}
	}
	same = (double)count / (double)(m * n);
	same *= 100.0;

	printf("%.2lf\n", same);

	return 0;
}