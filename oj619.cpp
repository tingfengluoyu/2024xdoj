#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	//0<n<50
	int n = 0;
	scanf("%d", &n);

	//ÿ�����ִ����Ȳ�����10,������ֵ������81
	char arr[50][10] = { 0 };
	//sum����洢���ִ�ÿλ��ͽ��
	int sum[50] = { 0 };

	//��ȡ���ִ������
	for (int i = 0; i < n; i++) {
		scanf("%9s", arr[i]);
		int len = strlen(arr[i]);
		for (int j = 0; j < len; j++) {
			sum[i] += arr[i][j] - '0';
		}
	}

	//�ҳ�ÿλ���ֵ�����Ǹ�������ж��������ֵ��ѡ����ֵ����Ǹ�
	int max = 0;
	for (int i = 0; i < n; i++){
		if (sum[max] < sum[i]) {
			max = i;
		}
	}

	//ͳ�����ֵΪ���ֵ�����ִ�����
	int count = 0;
	int found[50] = { 0 };
	for (int i = 0; i < n; i++) {
		if (sum[max] == sum[i]) {
			count++;
			found[i] = 1;
		}
	}

	if (count == 1) {
		printf("%s", arr[max]);
	}
	else {
		int num[50] = { 0 };
		for (int i = 0; i < n; i++) {
			if (found[i] == 1) {
				for (int j = 0; j < strlen(arr[i]); j++) {
					num[i] = num[i] * 10 + arr[i][j] - '0';
				}
			}
		}

		max = 0;
		for (int i = 0; i < n; i++) {
			if (num[max] < num[i]) {
				max = i;
			}
		}

		printf("%s", arr[max]);
	}

	return 0;
}