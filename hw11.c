#include <stdio.h>

#define SIZE 10

int main() {
    int tri[SIZE][SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        tri[i][0] = 1;
        tri[i][i] = 1;
    }
    
    for (int i = 2; i < SIZE; i++) {
        for (int j = 1; j < i; j++) {
            tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
        }
    }
    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%-3d ", tri[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}