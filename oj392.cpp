#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int compare(int x, int y);

int main() {
	int a[100] = { 0 };
	int n, i, j, k;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		for (k = i, j = i + 1;j < n;j++) {
			if (compare(a[j], a[k]) > 0){
				k = j;
			}
		}
		if (k != i) {
			int t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

int compare(int x, int y) {
	if ((x % 2 == 0) && (y % 2 != 0)) {
		return 1; // x是偶数，y是奇数，x应该排在y后面
	}
	else if ((x % 2 != 0) && (y % 2 == 0)) {
		return -1; // y是偶数，x是奇数，y应该排在x后面
	}

	if (x > y) {
		return 1;
	}
	else if (x == y) {
		return 0;
	}
	else if (x < y) {
		return -1;
	}
}