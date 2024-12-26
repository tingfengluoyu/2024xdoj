#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct student {
	char name[21];//名字,不超过20个字符
	char gender;//性别,F为女，M为男
	double a;//第一科成绩,需保留至一位小数
	int b;//第二科成绩
	int c;//第三科成绩
	int d;//第四科成绩
	double sum;//总成绩
};

int main()
{
	//0<=m<=n<=20
	int n = 0;//总学生人数
	int m = 0;//需要筛选出的人数
	scanf("%d %d", &n, &m);

	//读取学生信息,并计算总分
	struct student students[20];

	for (int i = 0; i < n; i++) {
		scanf("%20s %c %lf %d %d %d", students[i].name, &students[i].gender, &students[i].a, &students[i].b, &students[i].c, &students[i].d);
		students[i].sum = students[i].a + students[i].b + students[i].c + students[i].d;
	}

	//按规则排序,依据总分优先、第一科成绩次之、先女后男的原则，筛选前m 人的信息
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (students[j].sum < students[j + 1].sum || students[j].sum== students[j + 1].sum && students[j].a < students[j + 1].a || students[j].sum == students[j + 1].sum && students[j].a == students[j + 1].a && students[j].gender == 'M' && students[j + 1].gender == 'F') {
				struct student t = students[j];
				students[j] = students[j + 1];
				students[j + 1] = t;
			}
		}
	}

	//输出
	for (int i = 0; i < m; i++) {
		printf("%s %c %.1lf %.1lf\n", students[i].name, students[i].gender, students[i].a, students[i].sum);
	}

	return 0;
}