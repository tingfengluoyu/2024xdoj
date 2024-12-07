#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() 
{
	int n = 0;
	scanf("%d", &n);
	long long an[30] = { 0 }, bn[30] = { 0 };

	an[0] = 2;
	an[1] = 3;
	bn[0] = 1;
	bn[1] = 2;

	double sum = 0.0;

	if (n > 2) {
		for (int i = 2; i < n; i++) {
			an[i] = an[i - 1] + an[i - 2];
			bn[i] = bn[i - 1] + bn[i - 2];
		}
	}

	for (int i = 0; i < n; i++) {
		sum += (double)an[i] / (double)bn[i];
	}

	printf("%.2lf", sum);

	return 0;
}