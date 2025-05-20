#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

typedef struct {
    int x, y;
} Node;

int main() {
    int n, xs, ys, xe, ye;
    scanf("%d %d %d %d %d", &n, &xs, &ys, &xe, &ye);
    int maze[21][21]; // 使用1-based索引
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &maze[i][j]);
        }
    }

    // 定义四个方向：下、右、上、左
    int dx[] = { 1, 0, -1, 0 };
    int dy[] = { 0, 1, 0, -1 };

    int dist[21][21];
    int prev_x[21][21], prev_y[21][21];
    memset(dist, -1, sizeof(dist));
    memset(prev_x, -1, sizeof(prev_x));
    memset(prev_y, -1, sizeof(prev_y));

    Node queue[400]; // 队列足够大以容纳所有可能的节点
    int front = 0, rear = 0;
    queue[rear].x = xs;
    queue[rear].y = ys;
    rear++;
    dist[xs][ys] = 0;

    // BFS遍历
    while (front < rear) {
        Node current = queue[front++];
        int x = current.x;
        int y = current.y;
        if (x == xe && y == ye) {
            break;
        }
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= n) {
                if (maze[nx][ny] == 0 && dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    prev_x[nx][ny] = x;
                    prev_y[nx][ny] = y;
                    queue[rear].x = nx;
                    queue[rear].y = ny;
                    rear++;
                }
            }
        }
    }

    // 回溯路径
    int path_length = dist[xe][ye] + 1;
    Node* path = (Node*)malloc(path_length * sizeof(Node)); // 动态分配内存
    int current_x = xe, current_y = ye;
    int idx = path_length - 1;
    while (!(current_x == xs && current_y == ys)) {
        path[idx].x = current_x;
        path[idx].y = current_y;
        idx--;
        int px = prev_x[current_x][current_y];
        int py = prev_y[current_x][current_y];
        current_x = px;
        current_y = py;
    }
    path[0].x = xs;
    path[0].y = ys;

    // 输出结果
    printf("%d\n", dist[xe][ye]);
    for (int i = 0; i < path_length; i++) {
        printf("(%d,%d)", path[i].x, path[i].y);
    }
    printf("\n");

    free(path); // 释放内存
}