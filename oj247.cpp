#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct date {
	int yue;
	int ri;
};

int main()
{
	int day = 0;
	int nian = 0;
	scanf("%d %d", &nian, &day);

	struct date arr[12];

	for (int i = 0; i < 12;i++) {
		arr[i].yue = i + 1;
		if (arr[i].yue == 1 || arr[i].yue == 3 || arr[i].yue == 5 || arr[i].yue == 7 || arr[i].yue == 8 || arr[i].yue == 10 || arr[i].yue == 12) {
			arr[i].ri = 31;
		}
		else if (arr[i].yue == 4 || arr[i].yue == 6 || arr[i].yue == 9 || arr[i].yue == 11) {
			arr[i].ri = 30;
		}
		else if (arr[i].yue == 2 && ((nian % 4 == 0 && nian % 100 != 0) || nian % 400 == 0)) {
			arr[i].ri = 29;
		}
		else {
			arr[i].ri = 28;
		}
	}

	int i = 0;
	for (i = 0; i < 12; i++) {
		if (day > arr[i].ri) {
			day -= arr[i].ri;
		}
		else {
			break;
		}
	}

	int month = i + 1;
	printf("%d %d", month, day);
	
	return 0;
}