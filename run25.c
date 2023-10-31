#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100

void FreqDigits(char *str) {
    int count[10] = {0};
    int maxCount = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            int digit = str[i] - '0';
            count[digit]++;
            if (count[digit] > maxCount) {
                maxCount = count[digit];
            }
        }
    }

    if (maxCount == 0) {
        printf("null\n");
    } else {
        for (int i = 0; i < 10; i++) {
            if (count[i] == maxCount) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}

int main() {
    char str[SIZE];
    fgets(str, SIZE, stdin);
    str[strcspn(str, "\n")] = '\0';

    FreqDigits(str);

    return 0;
}