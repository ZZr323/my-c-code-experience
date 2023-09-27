#include <stdio.h>

int main() {
    int X, Y, i, j;
    scanf("%d,%d", &X, &Y);
    int arr[X][Y];
    printf("[");
    for (i = 0; i < X; i++) {
        printf("[");
        for (j = 0; j < Y; j++) {
            arr[i][j] = i * j;
            printf("%d", arr[i][j]);
            if (j < Y - 1) {
                printf(", ");
            }
        }
        printf("]");
        if (i < X - 1) {
            printf(", ");
        }
    }
    printf("]");
    return 0;
}