#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	int ji = 0;
	int ou = 0;
	int count = 0;
	int max = 0;
	scanf("%d", &n);
	for (int i = n;i <= n * n; i++) {
		if (i % 2 == 1) {
			ji += 1;
		}
		else {
			ou += 1;
		}
		if (i % 4 == 0 && i % 3 != 0) {
			count += 1;
		}
	}

	int arr[3];

	arr[0] = ji + ou;
	arr[1] = ji + count;
	arr[2] = ou + count;

	for (int i = 0; i < 3; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("%d %d %d\n%d", ji, ou, count, max);

	return 0;
}