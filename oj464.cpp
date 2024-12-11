#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printFactorial(int n);

int main()
{
    int n;

    scanf("%d", &n);
    printFactorial(n);

    return 0;
}

void printFactorial(int n) {
	int a[3000] = { 0 }, k = 0, token;   //1000！最多是3000位数 
	a[0] = 1;
	if (n > 1000 || n < 0) {
		printf("Invalid input\n");
		return;
	}
	if (n == 0 || n == 1) {
		printf("1\n");
		return;
	}
	for (int i = 2;i <= n;i++) {
		for (int j = 0;j < 3000;j++) {
			a[j] = a[j] * i + k;    //实现进位 
			k = a[j] / 10;    //进位要加的数 
			a[j] %= 10;       //进位后原位的值 
		}
	}
	for (int i = 2999;i >= 0;i--) {  //寻找最高位 
		if (a[i] != 0) {
			token = i;
			break;
		}
	}
	for (token;token >= 0;token--) {
		printf("%d", a[token]);
	}
}
