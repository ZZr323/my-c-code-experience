#include <stdio.h>

void printMatrix(int matrix[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("原矩阵：\n");
    printMatrix(matrix, rows, cols);

    for (int i = 0; i < rows; i++) {
        int maxIndex = 0;
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] > matrix[i][maxIndex]) {
                maxIndex = j;
            }
        }
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][maxIndex];
        matrix[i][maxIndex] = temp;
    }

    printf("处理后：\n");
    printMatrix(matrix, rows, cols);

    return 0;
}
