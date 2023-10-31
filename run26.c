#include <stdio.h>
#include <string.h>

int main() {
    char isbn[15];
    fgets(isbn, sizeof(isbn), stdin);
    isbn[strcspn(isbn, "\n")] = '\0';
    int sum = 0;
    int index = 1;
    for (int i = 0; i < strlen(isbn) - 2; i++) {
        if (isbn[i] >= '0' && isbn[i] <= '9') {
            sum += (isbn[i] - '0') * index;
            index++;
        }
    }
    int checksum = sum % 11;
    char eChecksum;
    if (checksum == 10) {
        eChecksum = 'X';
    } else {
        eChecksum = checksum + '0';
    }
    if (eChecksum == isbn[strlen(isbn) - 1]) {
        printf("Right\n");
    } else {
        isbn[strlen(isbn) - 1] = eChecksum;
        printf("%s\n", isbn);
    }

    return 0;
}