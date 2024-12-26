#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct bmp {
	int w = 0;//列
	int h = 0;//行
	int Image[10][10] = { 0 };//最多10行10列
};

int main()
{
	bmp BMP;
	//读取列，行
	scanf("%d %d", &BMP.w, &BMP.h);

	//读取bmp图
	int arr[10][10] = { 0 };
	for (int i = 0; i < BMP.h; i++) {
		for (int j = 0; j < BMP.w; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	//读取顺时针旋转的度数
	int degree = 0;
	scanf("%d", &degree);

	//可能用到的索引
	int a = 0;
	int b = 0;

	if (degree == 0) {
		//未旋转，直接输出列，行，原bmp图
		printf("%d %d\n", BMP.w, BMP.h);
		for (int i = 0; i < BMP.h; i++) {
			for (int j = 0; j < BMP.w; j++) {
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	}

	else if (degree == 90) {
		//旋转90°，列，行互换，输出旋转后的bmp图
		printf("%d %d\n", BMP.h, BMP.w);

		//旋转bmp图
		for (int i = 0; i < BMP.w; i++) {
			for (int j = BMP.h - 1; j >= 0; j--) {
				BMP.Image[a][b++] = arr[j][i];
			}
			a++;
			b = 0;
		}

		//列，行互换，输出图像
		for (int i = 0; i < BMP.w; i++) {
			for (int j = 0; j < BMP.h; j++) {
				printf("%d ", BMP.Image[i][j]);
			}
			printf("\n");
		}
	}

	else if (degree == 180) {
		//旋转180°，列，行不互换，输出图像
		printf("%d %d\n", BMP.w, BMP.h);

		//旋转bmp图
		for (int i = BMP.h - 1; i >= 0; i--) {
			for (int j = BMP.w - 1; j >= 0; j--) {
				BMP.Image[a][b++] = arr[i][j];
			}
			a++;
			b = 0;
		}
		
		//输出bmp图
		for (int i = 0; i < BMP.h; i++) {
			for (int j = 0; j < BMP.w; j++) {
				printf("%d ", BMP.Image[i][j]);
			}
			printf("\n");
		}
	}

	else if (degree == 270) {
		//旋转270°，列，行互换，输出旋转后的bmp图
		printf("%d %d\n", BMP.h, BMP.w);

		//旋转bmp图
		for (int i = BMP.w - 1; i >= 0; i--) {
			for (int j = 0; j < BMP.h; j++) {
				BMP.Image[a][b++] = arr[j][i];
			}
			a++;
			b = 0;
		}

		//列，行互换，输出图像
		for (int i = 0; i < BMP.w; i++) {
			for (int j = 0; j < BMP.h; j++) {
				printf("%d ", BMP.Image[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}