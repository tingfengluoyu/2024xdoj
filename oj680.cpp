#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

double f(double x,double a)
{
	return -(x * x * x) + a * (x * x);
}

int main()
{
	double a = 0.0;
	scanf("%lf", &a);

	double max = f(0, a);

	for (double i = 0; i <= 10; i += 0.0001) {
		if (max < f(i, a)){
			max = f(i, a);
		}
	}

	printf("%.2lf\n", max);

	return 0;
}