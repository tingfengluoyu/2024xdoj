#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct number {
	int num = 0;
	int sum = 0;
};

int main()
{
	//�����������ǲ�����10000�ķǸ�����
	//1<=n<=1000
	int n = 0;
	scanf("%d", &n);

	number arr[1000];

	for (int i = 0; i < n; i++) {
		//��ȡ����
		scanf("%d", &arr[i].num);
	}

	//����ÿ�����ֵĸ�λ����֮��
	for (int i = 0; i < n; i++) {
		int t = arr[i].num;
		while (t) {
			arr[i].sum += t % 10;
			t /= 10;
		}
	}

	//����λ����֮�ͽ������У��������ͬ����ԭ���ֽ�С����ǰ����
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j].sum < arr[j + 1].sum || arr[j].sum == arr[j + 1].sum && arr[j].num > arr[j + 1].num) {
				number temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//�������������
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", arr[i].num, arr[i].sum);
	}

	return 0;
}