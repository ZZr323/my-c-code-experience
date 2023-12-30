#include <stdio.h>

#define MAX_SIZE 20

int isMagicSquare(int matrix[][MAX_SIZE], int size) {
    // 计算每行、每列、主对角线和反对角线的和
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[0][i];
    }

    // 检查每行的和
    for (int i = 0; i < size; i++) {
        int rowSum = 0;
        for (int j = 0; j < size; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum != sum) {
            return 0;  // 不是幻方
        }
    }

    // 检查每列的和
    for (int i = 0; i < size; i++) {
        int colSum = 0;
        for (int j = 0; j < size; j++) {
            colSum += matrix[j][i];
        }
        if (colSum != sum) {
            return 0;  // 不是幻方
        }
    }

    // 检查主对角线的和
    int diagSum = 0;
    for (int i = 0; i < size; i++) {
        diagSum += matrix[i][i];
    }
    if (diagSum != sum) {
        return 0;  // 不是幻方
    }

    // 检查反对角线的和
    int reverseDiagSum = 0;
    for (int i = 0; i < size; i++) {
        reverseDiagSum += matrix[i][size - 1 - i];
    }
    if (reverseDiagSum != sum) {
        return 0;  // 不是幻方
    }

    return 1;  // 是幻方
}

int main() {
    int size;
    scanf("%d", &size);

    int matrix[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isMagic = isMagicSquare(matrix, size);

    if (isMagic) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}