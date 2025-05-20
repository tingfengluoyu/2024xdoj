#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MAX_N 100

typedef struct {
    int x, y;
    double r;          // �����ĵľ���
    double delta;      // ������Ե�ľ��Ծ���
    bool can_escape;   // �Ƿ����ֱ�����ϰ�
    bool is_start;     // �Ƿ������Ϊ���
} Crocodile;

Crocodile crocs[MAX_N];
int n, d;

// ���㵽���ĵľ���
double calculate_r(int x, int y) {
    return sqrt(x * x + y * y);
}

// ���㵽����Ե�ľ��Ծ���
double calculate_delta(double r) {
    return fabs(r - 7.5);
}

// �ж��Ƿ����ֱ�����ϰ�
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

    // ���㲢����������Ե������ľ���
    double min_delta = 1e9;
    for (int i = 0; i < n; i++) {
        if (crocs[i].delta < min_delta) {
            min_delta = crocs[i].delta;
        }
    }
    printf("%.1f\n", min_delta);

    // �ж��ܷ�ֱ�����ϰ�
    if (d >= 42.5) {
        printf("Yes\n");
        return 0;
    }

    // �����ڽӾ���
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

    // BFS����
    bool found = false;
    int queue[MAX_N];
    bool visited[MAX_N];

    for (int i = 0; i < n; i++) {
        if (!crocs[i].is_start) continue;

        // �����ǰ������ֱ������
        if (crocs[i].can_escape) {
            found = true;
            break;
        }

        // BFS��ʼ��
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