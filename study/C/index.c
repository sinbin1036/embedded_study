#include <stdio.h>

int main() {
    int x = 1, y = 1; // 초기 위치
    int dx[4] = {1, 0, -1, 0};  // 행(y) 이동 방향
    int dy[4] = {0, -1, 0, 1};  // 열(x) 이동 방향

    printf("초기 위치: y = %d, x = %d\n", y, x);

    for (int i = 0; i < 4; i++) {
        int nextY = y + dx[i];
        int nextX = x + dy[i];

        printf("이동 방향 %d: y = %d, x = %d\n", i, nextY, nextX);
    }

    getchar();
    return 0;
}