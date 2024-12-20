#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[7] = { 0 };

	int i = 0;
	int count = 0;

	while (n > 0) {
		arr[i++] = n % 10;
		n /= 10;
		count++;
	}

	int back = 0;//ÄæÐòÊý

	for (int i = 0; i < count; i++) {
		back = back * 10 + arr[i];
	}

	for (int i = 0; i < count; i++) {
		for (int j = i + 1; j < count; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	int low = 0;//½µÐòÊý

	for (int i = 0; i < count; i++) {
		low = low * 10 + arr[i];
	}

	printf("%d\n", back + low);

	return 0;
}