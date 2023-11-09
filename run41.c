#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

unsigned long long sumOfFactorials(int n) {
    if (n == 0) {
        return 0;
    } else {
        return factorial(n) + sumOfFactorials(n - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    unsigned long long result = sumOfFactorials(n);
    printf("%llu\n", result);

    return 0;
}