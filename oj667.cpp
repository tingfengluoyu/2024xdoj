#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct student {
	char name[21];//����,������20���ַ�
	char gender;//�Ա�,FΪŮ��MΪ��
	double a;//��һ�Ƴɼ�,�豣����һλС��
	int b;//�ڶ��Ƴɼ�
	int c;//�����Ƴɼ�
	int d;//���ĿƳɼ�
	double sum;//�ܳɼ�
};

int main()
{
	//0<=m<=n<=20
	int n = 0;//��ѧ������
	int m = 0;//��Ҫɸѡ��������
	scanf("%d %d", &n, &m);

	//��ȡѧ����Ϣ,�������ܷ�
	struct student students[20];

	for (int i = 0; i < n; i++) {
		scanf("%20s %c %lf %d %d %d", students[i].name, &students[i].gender, &students[i].a, &students[i].b, &students[i].c, &students[i].d);
		students[i].sum = students[i].a + students[i].b + students[i].c + students[i].d;
	}

	//����������,�����ܷ����ȡ���һ�Ƴɼ���֮����Ů���е�ԭ��ɸѡǰm �˵���Ϣ
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (students[j].sum < students[j + 1].sum || students[j].sum== students[j + 1].sum && students[j].a < students[j + 1].a || students[j].sum == students[j + 1].sum && students[j].a == students[j + 1].a && students[j].gender == 'M' && students[j + 1].gender == 'F') {
				struct student t = students[j];
				students[j] = students[j + 1];
				students[j + 1] = t;
			}
		}
	}

	//���
	for (int i = 0; i < m; i++) {
		printf("%s %c %.1lf %.1lf\n", students[i].name, students[i].gender, students[i].a, students[i].sum);
	}

	return 0;
}