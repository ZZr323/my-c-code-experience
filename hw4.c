#include <stdio.h>
#include <math.h>

#define TOWER_RADIUS 1
#define TOWER_HEIGHT 10

int main() {
    double x, y;

    printf("请输入点的坐标（x, y）：");
    scanf("%lf %lf", &x, &y);

    double distance1 = sqrt(pow(x - 2, 2) + pow(y - 2, 2));
    double distance2 = sqrt(pow(x + 2, 2) + pow(y - 2, 2));
    double distance3 = sqrt(pow(x + 2, 2) + pow(y + 2, 2));
    double distance4 = sqrt(pow(x - 2, 2) + pow(y + 2, 2));

    double height = 0;
    if (distance1 <= TOWER_RADIUS) {
        height = TOWER_HEIGHT;
    } else if (distance2 <= TOWER_RADIUS) {
        height = TOWER_HEIGHT;
    } else if (distance3 <= TOWER_RADIUS) {
        height = TOWER_HEIGHT;
    } else if (distance4 <= TOWER_RADIUS) {
        height = TOWER_HEIGHT;
    }

    printf("建筑高度为：%.2f米\n", height);

    return 0;
}