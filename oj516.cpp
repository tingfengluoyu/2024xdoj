#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;


double cross_product(Point a, Point b) {
    return a.x * b.y - a.y * b.x;
}

int main() {
    
    Point points[4];

    
    for (int i = 0; i < 4; i++) {
        if (scanf("%d %d", &points[i].x, &points[i].y) != 2) {
            printf("Error reading input.\n");
            return 1;
        }
    }
    
    
    Point vector1 = {points[1].x - points[0].x, points[1].y - points[0].y};
    Point vector2 = {points[3].x - points[0].x, points[3].y - points[0].y};

    
    double area = fabs(cross_product(vector1, vector2));
    
    printf("%.0lf\n", area); 
    return 0;
}