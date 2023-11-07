#include <stdio.h>
#include <string.h>
void LongestWord(const char* input) {
    int maxLength = 0;
    char longestWord[1000] = "";
    char currentWord[1000] = "";

    int length = strlen(input);
    for (int i = 0; i <= length; i++) {
        if (input[i] == ' ' || input[i] == '\0') {
            if (strlen(currentWord) > maxLength) {
                maxLength = strlen(currentWord);
                strcpy(longestWord, currentWord);
            }
            currentWord[0] = '\0'; 
        } else {
            strncat(currentWord, &input[i], 1);
        }
    }
    printf("Longest word: %s\n", longestWord);
}

int main() {
    char input[1000];
    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);
    int length = strlen(input);
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';
    }
    LongestWord(input);
    return 0;
}