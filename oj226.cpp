#include <stdio.h>
#include <string.h>

int main() {
	char a[100];
	scanf("%99s", &a);
	char arr[strlen(a) + 1];
	strcpy(arr, a);
	for (int i = 0; i < strlen(a) - 1; i++) {
		for (int j = 0; j < strlen(a) - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				char t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < strlen(a); i++) {
		printf("%c", arr[i]);
	}
	printf("\n");
	return 0;
}