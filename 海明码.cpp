#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int h[12]; // h[1]~h[11]�洢������λ

    // ��ʮ����ת��Ϊ������λ������h����
    for (int i = 1; i <= 11; i++) {
        h[i] = (n >> (i - 1)) & 1;
    }

    // ����У��ֵS1~S4
    int S1 = h[1] ^ h[3] ^ h[5] ^ h[7] ^ h[9] ^ h[11];
    int S2 = h[2] ^ h[3] ^ h[6] ^ h[7] ^ h[10] ^ h[11];
    int S3 = h[4] ^ h[5] ^ h[6] ^ h[7];
    int S4 = h[8] ^ h[9] ^ h[10] ^ h[11];
    int S = (S4 << 3) | (S3 << 2) | (S2 << 1) | S1;

    // ��������λ
    if (S != 0) {
        h[S] ^= 1;
    }

    // ��ȡ���������λD7~D1
    printf("%d%d%d%d%d%d%d", h[11], h[10], h[9], h[7], h[6], h[5], h[3]);
    return 0;
}