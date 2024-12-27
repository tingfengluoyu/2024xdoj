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

    // 读取身高和初始化编号
    for (int i = 0; i < n; i++) {
        scanf("%d", &students[i].high);
        students[i].num = i + 1;
    }

    // 读取体重
    for (int i = 0; i < n; i++) {
        scanf("%d", &students[i].weight);
    }

    // 排序
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // 如果当前学生身高高于下一个学生身高，或者身高相同但体重更重，则交换编号
            if (students[j].high > students[j + 1].high ||
                (students[j].high == students[j + 1].high && students[j].weight > students[j + 1].weight) ||
                (students[j].high == students[j + 1].high && students[j].weight == students[j + 1].weight && students[j].num > students[j + 1].num)) {
                struct student t = students[j];
                students[j] = students[j + 1];
                students[j + 1] = t;
            }
        }
    }

    // 输出排序后的编号
    for (int i = 0; i < n; i++) {
        printf("%d ", students[i].num);
    }
    printf("\n");

    return 0;
}

////题目：按照身高体重排队
//问题描述
//某学校举行运动会，学生们按编号(1、2、3…n)进行标识，现需要按照身高由低到高排
//列，对身高相同的人，按体重由轻到重排列；对于身高体重都相同的人，维持原有的编号顺
//序关系。请输出排列后的学生编号。
//输入格式
//第一行：学生个数n
//第二行：由n个正整数组成的身高序列，代表n个学生的身高
//第三行：由n个正整数组成的体重序列，代表n个学生的体重
//输出格式
//结果的排序，每个数值都是原始序列中的学生编号，编号从1开始
//样例输入1
//4
//100 100 120 130
//40 30 60 50
//样例输出1
//2 1 3 4
//样例输入2
//3
//90 110 90
//45 60 45
//样例输出2
//1 3 2
//样例说明
//样例1中，输出的第一个数字2表示此人原始编号为2，即身高为100，体重为30的这
//个人。由于他和编号为1的人身高一样，但体重更轻，因此要排在1前面。样例2中，1和
//3的身高体重都相同，需要按照原有位置关系让1排在3前面，而不是312。
//评测用例规模与约定
//0 < n≤100