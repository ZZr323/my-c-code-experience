#include <stdio.h>

int drink(int bottles, int caps) {
    if (caps < 3) {
        return 0;
    }

    int exchanged_bottles = caps / 3; // 可以换取的饮料瓶数
    int remaining_caps = exchanged_bottles + (caps % 3); // 剩余的瓶盖数
    int total_bottles = exchanged_bottles + drink(bottles + exchanged_bottles, remaining_caps);

    return total_bottles;
}

int main() {
    int n;
    scanf("%d", &n);
    int total_bottles = drink(n, n);
	int sum=n+total_bottles;
    printf("%d\n", sum);

    return 0;
}