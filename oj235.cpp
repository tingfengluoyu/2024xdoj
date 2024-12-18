#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* arr[12];
	for (int i = 0; i < 12; i++) {
		arr[i] = (int*)malloc(sizeof(int));
		*arr[i] = i + 1;
	}

	int n = 0;
	scanf("%d", &n);

	switch (n) {
		case 1:
			printf("January");
			break;
		case 2:
			printf("February");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("July");
			break;
		case 8:
			printf("August");
			break;
		case 9:
			printf("September");
			break;
		case 10:
			printf("October");
			break;
		case 11:
			printf("November");
			break;
		case 12:
			printf("December");
			break;
		default :
			printf("wrong");
			break;
	}

	for (int i = 0; i < 12; i++) {
		free(arr[i]);
	}

	return 0;
}