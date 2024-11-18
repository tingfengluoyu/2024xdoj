#include <stdio.h>

int main() {
    int N; // 帽子的个数
    scanf("%d", &N);

    int hats[N]; // 存储帽子颜色的数组
    for (int i = 0; i < N; i++) {
        scanf("%d", &hats[i]);
    }

    int K; // 宝宝群的个数
    scanf("%d", &K);

    for (int k = 0; k < K; k++) {
        int correct = 0; // 正确猜测的数量
        int guessed = 0; // 猜测的数量（不包括弃权）
        for (int i = 0; i < N; i++) {
            int guess;
            scanf("%d", &guess);
            if (guess != 0) { // 如果宝宝进行了猜测
                guessed++;
                if (guess == hats[i]) { // 如果猜测正确
                    correct++;
                }
            }
        }

        // 如果所有人都不猜，或者只要有一个人猜错了，输出 Ai Ya
        if (guessed == 0 || correct != guessed) {
            printf("Ai Ya\n");
        } else { // 否则，输出 Da Jiang!!!
            printf("Da Jiang!!!\n");
        }
    }

    return 0;
}