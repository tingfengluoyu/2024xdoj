#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int distance(int x1, int y1, int x2, int y2);

struct points {
	int x;
	int y;
};
int main()
{
	int n = 0;
	scanf("%d", &n);

	points start1 = { 4, 4 }, start2 = { -4, -4 };
	points recive[20];

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &recive[i].x, &recive[i].y);
	}

	for (int i = 0; i < n; i++) {
		int distance1 = distance(start1.x, start1.y, recive[i].x, recive[i].y);
		int distance2 = distance(start2.x, start2.y, recive[i].x, recive[i].y);
		if (distance1 < distance2) {
			printf("1 ");
		}
		else {
			printf("2 ");
		}
	}

	printf("\n");

	return 0;
}

int distance(int x1, int y1, int x2, int y2)
{
	return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}