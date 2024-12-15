#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct day {
	int year, month, date;
};

int main()
{
	day x;
	int mark = 0;
	scanf("%d,%d,%d", &x.year, &x.month, &x.date);
	for (int i = 1; i < x.month; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10) {
			mark += 31;
		}
		else if (i == 2) {
			if (x.year % 4 == 0 && x.year % 100 != 0 || x.year % 400 == 0) {
				mark += 29;
			}
			else {
				mark += 28;
			}
		}
		else {
			mark += 30;
		}
	}

	mark += x.date;

	printf("%d\n", mark);

	return 0;
}