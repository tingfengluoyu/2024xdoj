//”√Vistual C++≤≈––

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

struct jiudian {
	char name[10];
	int fangjian;
	int canyin;
	int jiaotong;
	int fuwu;
	int sum;
	char manyidu;
};

int main()
{
	int n = 0;
	scanf("%d", &n);//0<n<=10

	struct jiudian jiu[10];

	for (int i = 0; i < n; i++) {
		scanf("%9s %d %d %d %d", jiu[i].name, &jiu[i].fangjian, &jiu[i].canyin, &jiu[i].jiaotong, &jiu[i].fuwu);
		jiu[i].sum = jiu[i].fangjian + jiu[i].canyin + jiu[i].jiaotong + jiu[i].fuwu;

		if (jiu[i].sum > 23) {
			jiu[i].manyidu = 'A';
		}
		else if (jiu[i].sum > 16) {
			jiu[i].manyidu = 'B';
		}
		else {
			jiu[i].manyidu = 'C';
		}
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (jiu[j].manyidu > jiu[j + 1].manyidu || (jiu[j].manyidu == jiu[j + 1].manyidu && jiu[j].sum < jiu[j + 1].sum) || (jiu[j].manyidu == jiu[j + 1].manyidu && jiu[j].sum == jiu[j + 1].sum && strcmp(jiu[j].name, jiu[j + 1].name) > 0)) {
				struct jiudian t = jiu[j];
				jiu[j] = jiu[j + 1];
				jiu[j + 1] = t;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%s %d %c\n", jiu[i].name, jiu[i].sum, jiu[i].manyidu);
	}

	return 0;
}