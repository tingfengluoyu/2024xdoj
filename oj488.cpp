#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//0<n<=1000
	int n = 0;
	scanf("%d", &n);

	int count[10] = { 0 };
	int t = 0;

	for (int i = 0; i < n; i++) {
		//��ȡÿһ�����ֲ�ͳ�����λ���ֵĳ��ִ���,ÿ�����ֶ����������η�Χ
		scanf("%d", &t);
		//�������������0�������⴦��
		if (t == 0) {
			count[0]++;
			continue;
		}
		while (t) {
			count[t % 10]++;
			t /= 10;
		}
	}

	//ͳ�Ƴ��ִ��������ֵ
	int max = 0;
	for (int i = 0; i < 10; i++) {
		if (max < count[i]) {
			max = count[i];
		}
	}

	//���ͳ�Ƶ��������ֵ
	printf("%d: ", max);
	for (int i = 0; i < 10; i++) {
		if (count[i] == max) {
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}