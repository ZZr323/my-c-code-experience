#include <stdio.h>

int main() {
    double I, bonus;

    printf("请输入当月利润（单位：元）：");
    scanf("%lf", &I);

    if (I <= 100000) {
        bonus = I * 0.1;
    } else if (I <= 200000) {
        bonus = 100000 * 0.1 + (I - 100000) * 0.075;
    } else if (I <= 400000) {
        bonus = 100000 * 0.1 + 100000 * 0.075 + (I - 200000) * 0.05;
    } else if (I <= 600000) {
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (I - 400000) * 0.03;
    } else if (I <= 1000000) {
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (I - 600000) * 0.015;
    } else {
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (I - 1000000) * 0.01;
    }

    printf("应发奖金总数为：%.2lf元\n", bonus);

    return 0;
}