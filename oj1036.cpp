#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MAX_N 100

typedef struct {
    int x, y;
    double r;          // 到中心的距离
    double delta;      // 到岛边缘的绝对距离
    bool can_escape;   // 是否可以直接跳上岸
    bool is_start;     // 是否可以作为起点
} Crocodile;

Crocodile crocs[MAX_N];
int n, d;

// 计算到中心的距离
double calculate_r(int x, int y) {
    return sqrt(x * x + y * y);
}

// 计算到岛边缘的绝对距离
double calculate_delta(double r) {
    return fabs(r - 7.5);
}

// 判断是否可以直接跳上岸
bool can_escape(int x, int y) {
    int dist_x = 50 - abs(x);
    int dist_y = 50 - abs(y);
    return (dist_x <= d || dist_y <= d);
}

int main() {
    scanf("%d %d", &n, &d);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &crocs[i].x, &crocs[i].y);
        crocs[i].r = calculate_r(crocs[i].x, crocs[i].y);
        crocs[i].delta = calculate_delta(crocs[i].r);
        crocs[i].can_escape = can_escape(crocs[i].x, crocs[i].y);
        crocs[i].is_start = (crocs[i].delta <= d);
    }

    // 计算并输出最靠近岛边缘的鳄鱼的距离
    double min_delta = 1e9;
    for (int i = 0; i < n; i++) {
        if (crocs[i].delta < min_delta) {
            min_delta = crocs[i].delta;
        }
    }
    printf("%.1f\n", min_delta);

    // 判断能否直接跳上岸
    if (d >= 42.5) {
        printf("Yes\n");
        return 0;
    }

    // 构建邻接矩阵
    bool adj[MAX_N][MAX_N] = { false };
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int dx = crocs[i].x - crocs[j].x;
            int dy = crocs[i].y - crocs[j].y;
            int dist_sq = dx * dx + dy * dy;
            if (dist_sq <= d * d) {
                adj[i][j] = adj[j][i] = true;
            }
        }
    }

    // BFS遍历
    bool found = false;
    int queue[MAX_N];
    bool visited[MAX_N];

    for (int i = 0; i < n; i++) {
        if (!crocs[i].is_start) continue;

        // 如果当前起点可以直接逃脱
        if (crocs[i].can_escape) {
            found = true;
            break;
        }

        // BFS初始化
        memset(visited, false, sizeof(visited));
        int front = 0, rear = 0;
        queue[rear++] = i;
        visited[i] = true;

        while (front < rear) {
            int current = queue[front++];
            for (int j = 0; j < n; j++) {
                if (adj[current][j] && !visited[j]) {
                    if (crocs[j].can_escape) {
                        found = true;
                        goto end_search;
                    }
                    visited[j] = true;
                    queue[rear++] = j;
                }
            }
        }
    }

end_search:
    printf("%s\n", found ? "Yes" : "No");
    return 0;
}