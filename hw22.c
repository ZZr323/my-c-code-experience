#include <stdio.h>

int findLastPerson(int n) {
    int lastPerson = 0;
    for (int i = 2; i <= n; i++) {
        lastPerson = (lastPerson + 3) % i;
    }
    return lastPerson + 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int lastPersonNumber = findLastPerson(n);
    printf("%d\n", lastPersonNumber);

    return 0;
}