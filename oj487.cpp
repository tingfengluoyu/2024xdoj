#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct student {
	char name[21];
	int score;
};

int main()
{
	//1<=n<=100,共有n个学生
	int n = 0;
	scanf("%d", &n);

	//3个成绩分段的人数
	int high = 0;//80-100
	int medium = 0;//60-79
	int low = 0;//0-59

	//读取学生名字及成绩
	student students[100];

	for (int i = 0; i < n; i++) {
		scanf("%20s %d", students[i].name, &students[i].score);
	}

	//统计各个分段人数
	for (int i = 0; i < n; i++) {
		if (students[i].score >= 80 && students[i].score <= 100) {
			high++;
		}
		else if (students[i].score >= 60 && students[i].score <= 79) {
			medium++;
		}
		else if (students[i].score >= 0 && students[i].score <= 59) {
			low++;
		}
	}

	printf("%d %d %d\n", high, medium, low);

	return 0;
}