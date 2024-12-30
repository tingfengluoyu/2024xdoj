#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct student {
	char name[21];
	int score[5];
	int sum;
	int plus;
};

int main()
{
	int n = 0;
	//0<n<100
	scanf("%d", &n);

	struct student students[100];

	for (int i = 0; i < n; i++) {
		scanf("%20s", students[i].name);
		students[i].sum = 0;
		for (int j = 0; j < 5; j++) {
			scanf("%d", &students[i].score[j]);
			students[i].sum += students[i].score[j];
		}
		scanf("%d", &students[i].plus);
		students[i].sum += students[i].plus;
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (students[j].sum < students[j + 1].sum || (students[j].sum == students[j + 1].sum && students[j].plus < students[j + 1].plus)) {
				struct student t = students[j];
				students[j] = students[j + 1];
				students[j + 1] = t;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%s %d %d\n", students[i].name, students[i].sum, students[i].plus);
	}

	return 0;
}