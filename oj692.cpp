#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int A = 0;
	int B = 0;
	int a3 = 0;
	int a4 = 0;
	int a5 = 0;
	int max = 0;
	scanf("%d %d", &A, &B);

	if (A < B) {
		for (int i = A; i <= B; i++) {
			if (i % 3 == 0) {
				a3 += 1;
			}
			if (i % 4 == 0) {
				a4 += 1;
			}
			if (i % 5 == 0 && i % 2 != 0) {
				a5 += 1;
			}
		}
	}
	else {
		for (int i = B; i <= A; i++) {
			if (i % 3 == 0) {
				a3 += 1;
			}
			if (i % 4 == 0) {
				a4 += 1;
			}
			if (i % 5 == 0 && i % 2 != 0) {
				a5 += 1;
			}
		}
	}

	int arr[6];
	arr[0] = a3 % a4;
	arr[1] = a3 % a5;
	arr[2] = a4 % a5;
	arr[3] = a4 % a3;
	arr[4] = a5 % a3;
	arr[5] = a5 % a4;

	for (int i = 0; i < 6; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("%d %d %d\n%d", a3, a4, a5, max);

	return 0;
}