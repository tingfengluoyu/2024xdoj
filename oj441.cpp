#include <stdio.h>

#define MAX_LENGTH 10000
#define MAX_REGIONS 100

int main() {
    int L, M;
    // 读取马路长度L和区域数目M
    scanf("%d %d", &L, &M);

    // 用一个数组来表示马路上每棵树的状态，初始化为1表示树存在
    int trees[MAX_LENGTH + 1];
    for (int i = 0; i <= L; i++) {
        trees[i] = 1;
    }

    int start, end;
    // 遍历每个区域
    for (int i = 0; i < M; i++) {
        // 读取每个区域的起始点和终止点坐标
        scanf("%d %d", &start, &end);
        // 将区域内的树标记为要移走，即对应数组元素设为0
        for (int j = start; j <= end; j++) {
            trees[j] = 0;
        }
    }

    // 统计剩余树的数量
    int count = 0;
    for (int i = 0; i <= L; i++) {
        if (trees[i]) {
            count++;
        }
    }

    // 输出剩余树的数量
    printf("%d\n", count);

    return 0;
}