#include <stdio.h>

int gcd(int m, int n) {
    if (n == 0) {
        return m;
    }
    return gcd(n, m % n);
}

int lcm(int m, int n) {
    int gcdValue = gcd(m, n);
    return (m * n) / gcdValue;
}

int main() {
    int m, n;
    printf("请输入两个正整数 m 和 n：");
    scanf("%d %d", &m, &n);

    int gcdValue = gcd(m, n);
    int lcmValue = lcm(m, n);

    printf("最大公约数: %d\n", gcdValue);
    printf("最小公倍数: %d\n", lcmValue);

    return 0;
}