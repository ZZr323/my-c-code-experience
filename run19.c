#include <stdio.h>
#include <stdlib.h>

void printSpaces(int num) {
    for (int i = 0; i < num; i++) {
        printf(" ");
    }
}

void printStars(int num) {
    for (int i = 0; i < num; i++) {
        printf("*");
    }
}

void printDiamond(int n) {
    // 打印上半部分
    for (int i = 1; i <= n; i++) {
        printSpaces(n - i);
        printStars(2 * i - 1);
        printf("\n");
    }

    // 打印下半部分
    for (int i = n - 1; i >= 1; i--) {
        printSpaces(n - i);
        printStars(2 * i - 1);
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printDiamond(n);

    return 0;
}