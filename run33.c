#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

int calculate_length_without_spaces(char string[]) {
    int length = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (!isspace(string[i])) {
            length++;
        }
    }
    return length;
}

void find_longest_substring(char string[], char longest[]) {
    int start = 0;
    int max_length = 0;
    int current_length = 0;
    int current_start = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        if (!isspace(string[i])) {
            if (current_length == 0) {
                current_start = i;
            }
            current_length++;

            if (current_length > max_length) {
                max_length = current_length;
                start = current_start;
            }
        } else {
            current_length = 0;
        }
    }

    strncpy(longest, string + start, max_length);
    longest[max_length] = '\0';
}

int main() {
    char input[MAX_LENGTH];
    char strings[MAX_LENGTH][MAX_LENGTH];
    int lengths[MAX_LENGTH];
    char longest[MAX_LENGTH];


    // 逐行读取输入字符串
    int i = 0;
    while (1) {
        fgets(input, MAX_LENGTH, stdin);
        input[strcspn(input, "\n")] = '\0';
        if (strcmp(input, "stop") == 0) {
            break;
        }
        strcpy(strings[i], input);
        lengths[i] = calculate_length_without_spaces(input);
        i++;
    }

    // 输出每行字符串的长度和最长子字符串
    for (int j = 0; j < i; j++) {
        if (lengths[j] > 0) {
            find_longest_substring(strings[j], longest);
            printf("%d %s\n", lengths[j], longest);
        }
    }

    return 0;
}