#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int m = 0;
	int k = 0;
	int a0 = 0;
	int a1 = 0;
	int a2 = 0;
	scanf("%d %d", &m, &k);

	if (k == 2) {
		if (2 % m == 0) {
			a0++;
		}
		if (2 % m == 1) {
			a1++;
		}
		if (2 % m > 1) {
			a2++;
		}
		if (3 % m == 0) {
			a0++;
		}
		if (3 % m == 1) {
			a1++;
		}
		if (3 % m > 1) {
			a2++;
		}
	}
	else {
		if (2 % m == 0) {
			a0++;
		}
		if (2 % m == 1) {
			a1++;
		}
		if (2 % m > 1) {
			a2++;
		}
		if (3 % m == 0) {
			a0++;
		}
		if (3 % m == 1) {
			a1++;
		}
		if (3 % m > 1) {
			a2++;
		}
		for (int i = 3; i <= k; i++) {
			int x = i * i + i - 4;
			if (x % m == 0) {
				a0++;
			}
			if (x % m == 1) {
				a1++;
			}
			if (x % m > 1) {
				a2++;
			}
		}
	}

	printf("%d %d %d", a0, a1, a2);

	return 0;
}