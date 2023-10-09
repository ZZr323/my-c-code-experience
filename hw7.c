#include <stdio.h>

int main() {
    double sum = 0;
    double t = 1;

    for (int i = 1; i <= 20; i++) {
        t *= i;
        sum += t;
    }

    printf("从1!到20!的和为：%23.17e\n", sum);

    return 0;
}