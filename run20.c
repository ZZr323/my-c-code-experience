
#include <stdio.h>

int main() {
    int total;
    scanf("%d",&total);
    int count = 0;

    for (int high = 1; high <= total; high++) {
        for (int mid = 1; mid <= total - high; mid++) {
            int low = total - high - mid;

            if (low >= 1) {
                int cost = 3 * high + 2 * mid + 1 * low;

                if (cost == 50) {
                    count++;
                    printf("大学生%d,中学生%d,小学生%d\n", high, mid, low);
                }
            }
        }
    }

    printf("sum=%d\n", count);

    return 0;
}
