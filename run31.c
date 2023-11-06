#include <stdio.h>
#include <string.h>

void insertMaxIntoMin(char *a, char *b) {
    char minChar = a[0];
    char maxChar = b[0];

    for (int i = 1; i < strlen(a); i++) {
        if (a[i] < minChar) {
            minChar = a[i];
        }
    }

    for (int i = 1; i < strlen(b); i++) {
        if (b[i] > maxChar) {
            maxChar = b[i];
        }
    }
    int minIndex = 0;
    while (a[minIndex] != minChar) {
        minIndex++;
    }

    char result[100];
    strncpy(result, a, minIndex + 1);
    result[minIndex + 1] = maxChar;
    strcpy(result + minIndex + 2, a + minIndex + 1);

    strcpy(a, result);
}

int main() {
    char a[100];
    char b[100];

    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';  

    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';  

    insertMaxIntoMin(a, b);

    printf("%s\n", a);

    return 0;
}