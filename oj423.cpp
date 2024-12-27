#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct student {
    int num;
    int high;
    int weight;
};

int main() {
    int n = 0;
    scanf("%d", &n);

    struct student students[100];

    // ��ȡ��ߺͳ�ʼ�����
    for (int i = 0; i < n; i++) {
        scanf("%d", &students[i].high);
        students[i].num = i + 1;
    }

    // ��ȡ����
    for (int i = 0; i < n; i++) {
        scanf("%d", &students[i].weight);
    }

    // ����
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // �����ǰѧ����߸�����һ��ѧ����ߣ����������ͬ�����ظ��أ��򽻻����
            if (students[j].high > students[j + 1].high ||
                (students[j].high == students[j + 1].high && students[j].weight > students[j + 1].weight) ||
                (students[j].high == students[j + 1].high && students[j].weight == students[j + 1].weight && students[j].num > students[j + 1].num)) {
                struct student t = students[j];
                students[j] = students[j + 1];
                students[j + 1] = t;
            }
        }
    }

    // ��������ı��
    for (int i = 0; i < n; i++) {
        printf("%d ", students[i].num);
    }
    printf("\n");

    return 0;
}

////��Ŀ��������������Ŷ�
//��������
//ĳѧУ�����˶��ᣬѧ���ǰ����(1��2��3��n)���б�ʶ������Ҫ��������ɵ͵�����
//�У��������ͬ���ˣ����������ᵽ�����У�����������ض���ͬ���ˣ�ά��ԭ�еı��˳
//���ϵ����������к��ѧ����š�
//�����ʽ
//��һ�У�ѧ������n
//�ڶ��У���n����������ɵ�������У�����n��ѧ�������
//�����У���n����������ɵ��������У�����n��ѧ��������
//�����ʽ
//���������ÿ����ֵ����ԭʼ�����е�ѧ����ţ���Ŵ�1��ʼ
//��������1
//4
//100 100 120 130
//40 30 60 50
//�������1
//2 1 3 4
//��������2
//3
//90 110 90
//45 60 45
//�������2
//1 3 2
//����˵��
//����1�У�����ĵ�һ������2��ʾ����ԭʼ���Ϊ2�������Ϊ100������Ϊ30����
//���ˡ��������ͱ��Ϊ1�������һ���������ظ��ᣬ���Ҫ����1ǰ�档����2�У�1��
//3��������ض���ͬ����Ҫ����ԭ��λ�ù�ϵ��1����3ǰ�棬������312��
//����������ģ��Լ��
//0 < n��100