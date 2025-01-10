#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct stu {
	int num;
	char name[11];
	int a;
	int b;
	int c;
	double avg;
};

int main()
{
	int n = 0;
	scanf("%d", &n);

	struct stu student[100];

	for (int i = 0; i < n; i++) {
		scanf("%d %s %d %d %d", &student[i].num, student[i].name, &student[i].a, &student[i].b, &student[i].c);
		student[i].avg = (double)(student[i].a + student[i].b + student[i].c) / 3.0;
	}

	for (int i = 0; i < n; i++) {
		int max = i;
		for (int j = i; j < n; j++) {
			if (student[j].avg > student[max].avg) {
				max = j;
			}
		}

		struct stu t = student[i];
		student[i] = student[max];
		student[max] = t;
	}

	for (int i = 0; i < n; i++) {
		printf("%d %s %.1lf\n", student[i].num, student[i].name, student[i].avg);
	}

	return 0;
}