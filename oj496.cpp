#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct bmp {
	int w = 0;//��
	int h = 0;//��
	int Image[10][10] = { 0 };//���10��10��
};

int main()
{
	bmp BMP;
	//��ȡ�У���
	scanf("%d %d", &BMP.w, &BMP.h);

	//��ȡbmpͼ
	int arr[10][10] = { 0 };
	for (int i = 0; i < BMP.h; i++) {
		for (int j = 0; j < BMP.w; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	//��ȡ˳ʱ����ת�Ķ���
	int degree = 0;
	scanf("%d", &degree);

	//�����õ�������
	int a = 0;
	int b = 0;

	if (degree == 0) {
		//δ��ת��ֱ������У��У�ԭbmpͼ
		printf("%d %d\n", BMP.w, BMP.h);
		for (int i = 0; i < BMP.h; i++) {
			for (int j = 0; j < BMP.w; j++) {
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	}

	else if (degree == 90) {
		//��ת90�㣬�У��л����������ת���bmpͼ
		printf("%d %d\n", BMP.h, BMP.w);

		//��תbmpͼ
		for (int i = 0; i < BMP.w; i++) {
			for (int j = BMP.h - 1; j >= 0; j--) {
				BMP.Image[a][b++] = arr[j][i];
			}
			a++;
			b = 0;
		}

		//�У��л��������ͼ��
		for (int i = 0; i < BMP.w; i++) {
			for (int j = 0; j < BMP.h; j++) {
				printf("%d ", BMP.Image[i][j]);
			}
			printf("\n");
		}
	}

	else if (degree == 180) {
		//��ת180�㣬�У��в����������ͼ��
		printf("%d %d\n", BMP.w, BMP.h);

		//��תbmpͼ
		for (int i = BMP.h - 1; i >= 0; i--) {
			for (int j = BMP.w - 1; j >= 0; j--) {
				BMP.Image[a][b++] = arr[i][j];
			}
			a++;
			b = 0;
		}
		
		//���bmpͼ
		for (int i = 0; i < BMP.h; i++) {
			for (int j = 0; j < BMP.w; j++) {
				printf("%d ", BMP.Image[i][j]);
			}
			printf("\n");
		}
	}

	else if (degree == 270) {
		//��ת270�㣬�У��л����������ת���bmpͼ
		printf("%d %d\n", BMP.h, BMP.w);

		//��תbmpͼ
		for (int i = BMP.w - 1; i >= 0; i--) {
			for (int j = 0; j < BMP.h; j++) {
				BMP.Image[a][b++] = arr[j][i];
			}
			a++;
			b = 0;
		}

		//�У��л��������ͼ��
		for (int i = 0; i < BMP.w; i++) {
			for (int j = 0; j < BMP.h; j++) {
				printf("%d ", BMP.Image[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}