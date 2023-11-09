#include <stdio.h>

void rotateMatrix(int matrix[][200], int n) {
    // 按逆时针方向旋转90°
    // 先进行转置操作
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // 再进行上下翻转操作
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[n - 1 - i][j];
            matrix[n - 1 - i][j] = temp;
        }
    }
}

void printMatrix(int matrix[][200], int n) {
    // 打印矩阵
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n - 1) {
                printf("%d", matrix[i][j]);
            } else {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int matrix[200][200];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    rotateMatrix(matrix, n);

    printMatrix(matrix, n);

    return 0;
}