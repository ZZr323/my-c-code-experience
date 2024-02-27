#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i;
    while (scanf("%d", &n) != EOF && n != 0) {
        int* liftfloor;
        liftfloor = (int*)malloc(n * sizeof(int));
        for (i = 0; i < n; i++) {
            scanf("%d", &liftfloor[i]);
        }

        int total_time = 0;
        int current_floor = 0;

        for (i = 0; i < n; i++) {
            int floor = liftfloor[i];
            int movetime = abs(floor - current_floor) * (floor > current_floor ? 6 : 4);
            total_time += movetime + 5;
            current_floor = floor;
        }

        printf("%d\n", total_time);
    }
    return 0;
}
