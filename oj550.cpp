#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct worker {
    char name[10];
    double base, wave, pay;
};

int main()
{
    int n = 0;
    scanf("%d", &n);

    struct worker workers[100];

    for (int i = 0; i < n; i++) {
        scanf("%9s %lf %lf %lf", workers[i].name, &workers[i].base, &workers[i].wave, &workers[i].pay);
    }

    for (int i = 0; i < n; i++) {
        printf("%s %.2lf\n", workers[i].name, workers[i].base + workers[i].wave - workers[i].pay); // 输出姓名和净收入
    }

    return 0;
}