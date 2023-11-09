#include <stdio.h>

int n = 0;

void f(int j, int b) {
    if (j == 0) {
        if (b % 2 == 0)
            n++;
    }
    if (j > 0)
        f(j - 1, b + 1);
    if (j > 0)
        f(j - 2, b + 1);
}

int main() {
    int x;
    scanf("%d",&x);
    f(x, 0);
    printf("%d\n", n);

    return 0;
}