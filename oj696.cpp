#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int max = 0;
	int min = 0;

	for (int i = 0; i < n; i++) {
		if (arr[max] < arr[i]) {
			max = i;
		}
	}

	if (max != n - 1) {
		int t = arr[max];
		arr[max] = arr[n - 1];
		arr[n - 1] = t;
	}

	for (int i = 0; i < n; i++) {
		if (arr[min] > arr[i]) {
			min = i;
		}
	}
	
	if (min != 0) {
		int x = arr[min];
		arr[min] = arr[0];
		arr[0] = x;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}