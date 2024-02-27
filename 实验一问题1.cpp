#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int getDigitalRoot(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    if (sum >= 10) {
        return getDigitalRoot(sum);
    }
    return sum;
}

int main() {
    int VedicSquare[9][9];
    int target=1;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            VedicSquare[i - 1][j - 1] = getDigitalRoot(i * j);
        }
    }
    printf("   |  1 2 3 4 5 6 7 8 9\n");
    printf("---|---------------------\n");
    for (int i = 1; i <= 9; i++) {
        printf(" %d |  ",i);
        for (int j = 1; j <= 9; j++) {
            printf("%d ", VedicSquare[i - 1][j - 1]);
        }
        printf("\n");
    }
    while (target <= 9) {
        printf("当指定数字为%d时", target);
        printf("\n");
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (VedicSquare[i][j] == target) {
                    printf("* ");
                }
                else {
                    printf("  ", VedicSquare[i][j]);
                }
            }
            printf("\n");
        }
        target++;
    }
    return 0;
}