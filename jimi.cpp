#include<stdio.h>

// 判断是否为闰年
int isLeapYear(int x) {
    if(x % 4 == 0 && x % 100 != 0 || x % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int nian = 0;
    int yue = 0;
    int ri = 0;
    int shi = 0;
    int fen = 0;
    int miao = 0;

    scanf("%d", &nian);
    scanf("%d", &yue);
    scanf("%d", &ri);
    scanf("%d", &shi);
    scanf("%d", &fen);
    scanf("%d", &miao);

    miao += 1;
    if(miao == 60) {
        miao = 0;
        fen += 1; // 使用 += 而不是 +
    }

    if(fen == 60) {
        fen = 0;
        shi += 1; // 使用 += 而不是 +
    }

    if(shi == 24) {
        shi = 0;
        ri += 1; // 使用 += 而不是 +
    }

    if(ri == 32) { // 检查是否需要进位到下一个月
        ri = 1;
        // 处理每个月的天数
        switch(yue) {
            case 1: yue = 2; break;
            case 3: yue = 4; break;
            case 5: yue = 6; break;
            case 7: yue = 8; break;
            case 8: yue = 9; break;
            case 10: yue = 11; break;
            case 12: // 跨年
                nian += 1;
                yue = 1;
                break;
            default:
                break;
        }
    }

    // 处理2月的天数
    if(yue == 2) {
        int daysInFebruary = isLeapYear(nian) ? 29 : 28;
        if(ri == daysInFebruary + 1) {
            yue += 1;
            ri = 1;
        }
    }

    printf("%d\n%d\n%d\n%d\n%d\n%d\n", nian, yue, ri, shi, fen, miao);
    return 0;
}