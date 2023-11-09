#include <stdio.h>
#include<stdint.h>
long long int findGCD(long long int num1, long long int num2) {
    if (num2 == 0) {
        return num1;
    }
    return findGCD(num2, num1 % num2);
}

long long int findLCM(long long int num1, long long int num2) {
    long long int gcd = findGCD(num1, num2);
    return (num1 / gcd) * num2;
}

int main() {
    long long int num1, num2;
    scanf("%lld %lld", &num1, &num2);

    if (num1 < 0 || num2 < 0) {
        printf("Input Error\n");
        return 0;
    }

    long long int gcd = findGCD(num1, num2);
    long long int lcm = findLCM(num1, num2);

    printf("%lld %lld", gcd,lcm);

    return 0;
}