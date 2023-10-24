#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("请输入奇数阶魔方阵的阶数：");
    scanf("%d", &n);
    int **square = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        square[i] = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            square[i][j] = 0;
        }
    }
    int num = 1;
    int row = 0;
    int col = n / 2;
    while (num <= n * n) {
        square[row][col] = num;
        num++;
        int nextRow = (row - 1 + n) % n;
        int nextCol = (col + 1) % n;
        if (square[nextRow][nextCol] != 0) {
            row = (row + 1) % n;
        } else {
            row = nextRow;
            col = nextCol;
        }
    }
    printf("生成的%d阶奇数阶魔方阵：\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%-4d", square[i][j]);
        }
        printf("\n");
    for (int i = 0; i < n; i++) {
        free(square[i]);
    }
    free(square);
    return 0;
}