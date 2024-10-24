#include<stdio.h>
int t = 0;
double T = 0;
int main()
{
	scanf("%d", &t);
	if(t > 32 && t < 212)
	{
	T = (t - 32)*(5.0 / 9);
	printf("%.2f", T);
	};
	return 0;
}
