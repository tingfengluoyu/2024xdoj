#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[4];
	char array[51];
	int count = 0;
	scanf("%s", arr);
	scanf("%s", array);

	int len = strlen(arr);

	if (len == 1) {
		for (int i = 0; i < strlen(array); i++) {
			if (arr[0] == array[i]) {
				count++;
			}
		}
	}
	else if (len == 2) {
		for (int i = 0; i < strlen(array) - 1; i++) {
			if (arr[0] == array[i] && arr[1] == array[i + 1]) {
				count++;
			}
		}
	}
	else if (len == 3) {
		for (int i = 0; i < strlen(array) - 2; i++) {
			if (arr[0] == array[i] && arr[1] == array[i + 1] && arr[2] == array[i + 2]){
				count++;
		    }
		}
	}

	printf("%d\n", count);

	return 0;
}