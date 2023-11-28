#include <stdio.h>
#include <ctype.h>

int main() {
    char inputString[1000];
    int numbers[100], count = 0;
  
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int i = 0;
    while (inputString[i] != '\0') {
        if (isdigit(inputString[i])) {
            int number = 0;
            while (isdigit(inputString[i])) {
                number = number * 10 + (inputString[i] - '0');
                i++;
            }
            numbers[count] = number;
            count++;
        } else {
            i++;
        }
    }

    printf("Extracted numbers: ");
    for (int j = 0; j < count; j++) {
        printf("%d ", numbers[j]);
    }
    printf("\n");

    printf("Total numbers: %d\n", count);

    return 0;
}
