#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    double* probabilities = (double*)malloc(n * sizeof(double));
    double sum = 0.0;
    double entropy = 0.0;

    for (int i = 0; i < n; i++) {
        scanf("%lf", &probabilities[i]);
        sum += probabilities[i];
    }

    if (fabs(sum - 1.0) > 1e-6) { // ʹ���ݲ�ֵ�жϸ���֮���Ƿ�Ϊ1
        printf("Error Input!\n");
    }
    else {
        for (int i = 0; i < n; i++) {
            if (probabilities[i] > 0) { // ֻ���������ʵ���
                entropy -= probabilities[i] * log2(probabilities[i]);
            }
        }
        printf("%.4lf\n", entropy); // ���������λС������ֵ
    }

    free(probabilities);
    return 0;
}