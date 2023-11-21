#include <stdio.h>
#include <stdlib.h>
void rearrange(int *arr, int n, int m) {
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = *((arr+i));
    }

    for (int i = 0; i < n; i++) {
        *((arr+i)) = temp[(i + m) % n];
    }
}

int main() {
    int n, m;
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", arr+i);
    }
    printf("Enter the number of positions to move (m): ");
    scanf("%d", &m);
    rearrange(arr, n, m);
    printf("After rearrange:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
    free(arr);
    return 0;
}