#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main()
{
	double x[1000] = { 0.0 };
	double r = 0.0;
	scanf("%lf %lf", &x[0], &r);

	for (int i = 1; i < 1000; i++) {
		x[i] = r * x[i - 1] * (1 - x[i - 1]);
		if (fabs(x[i] - x[i - 1]) < 0.00001) {
			printf("%.4lf 1\n", x[i]);
			break;
		}
		if (i == 999) {
			printf("%.4lf 0\n", x[999]);
		}
	}

	return 0;
}