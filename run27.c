#include <stdio.h>

int main() {
    int M1, M2;
    scanf("%d %d", &M1, &M2);

    char commands[201];
    scanf("%s", commands);

    int R1 = 0, R2 = 0, R3 = 0;

    for (int i = 0; commands[i] != '\0'; i++) {
        switch (commands[i]) {
            case 'A':
                R1 = M1;
                break;
            case 'B':
                R2 = M2;
                break;
            case 'C':
                M1 = R3;
                break;
            case 'D':
                M2 = R3;
                break;
            case 'E':
                R3 = R1 + R2;
                break;
            case 'F':
                R3 = R1 - R2;
                break;
            default:
                break;
        }
    }

    printf("%d,%d\n", M1, M2);

    return 0;
}