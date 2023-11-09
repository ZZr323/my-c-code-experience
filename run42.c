#include <stdio.h>

int sumOfFactors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

void findAmicableNumbers() {
    for (int a = 1; a <= 3000; a++) {
        int b = sumOfFactors(a);
        if (a != b && sumOfFactors(b) == a && b <= 3000 && a < b) {
            printf("(%d,%d)", a, b);
        }
    }
}

int main() {
    findAmicableNumbers();
    return 0;
}