#include <stdio.h>
#include <string.h>

int main() {
    int i, n, temp, a[100];
    memset(a, 0, sizeof(a));
    scanf("%d", &n);
    a[0] = 2;
    int len = 1;
    n--;

    while (n--) {
        temp = 0;
        for (i = 0; i < len; i++) {
            a[i] = a[i] * 2 + temp;
            if (i == 0)
                a[i] += 2;
            temp = a[i] / 10;
            a[i] %= 10;
        }
        a[len] += temp;
        if (a[len])
            len++;
    }

    for (int i = len - 1; i >= 0; i--) {
        printf("%d", a[i]);
    }

    return 0;
}