#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	double x = 0.0;
	int time = 0;
	double cost = 0;
	scanf("%lf %d", &x, &time);

	if (x <= 3) {
		cost = 10.0;
	}
	else if (x > 3 && x <= 10) {
		cost = 10.0 + (x - 3.0) * 2.0;
	}
	else {
		cost = 24.0 + (x - 10.0) * 3.0;
	}
	if (time >= 5) {
		while (time >= 5) {
			cost += 2.0;
			time -= 5;
		}
	}

	printf("%.1lf", cost);

	return 0;
}