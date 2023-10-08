#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int num;
  
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("偶数\n");
    } else if (num > 1) {
        if (is_prime(num)) {
            printf("素数\n");
        } else {
            printf("奇数\n");
        }
    } else {
        printf("奇数\n");
    }

    return 0;
}