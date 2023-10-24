#include <stdio.h>
#define SIZE 3
int main() {
    int arr[SIZE][SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int count = 0;
    int row, col;
    int isSaddle = 1;
    for (int i = 0; i < SIZE; i++) {
        row = arr[i][0];
        int col = 0;
        isSaddle = 1;
        for (int j = 0; j < SIZE; j++) {
            if (arr[i][j] > row) {
                row = arr[i][j];
                col = j;
            }
        }
        for (int k = 0; k < SIZE; k++) {
            if (arr[k][col] < row) {
                isSaddle = 0;
                break;
            }
        }
        if (isSaddle) {
            printf("鞍点：arr[%d][%d]=%d\n", i, col, row);
            count++;
        }
    }
    if (count == 0) {
        printf("没有鞍点。\n");
    }
    return 0;
}