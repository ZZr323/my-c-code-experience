#include <stdio.h>
#include <string.h>

#define MAX_ROWS 3
#define MAX_COLS 100

void sortRows(char rows[MAX_ROWS][MAX_COLS]) {
    char temp[MAX_COLS];

    for (int i = 0; i < MAX_ROWS - 1; i++) {
        for (int j = 0; j < MAX_ROWS - i - 1; j++) {
            if (strcmp(rows[j], rows[j + 1]) > 0) {
                strcpy(temp, rows[j]);
                strcpy(rows[j], rows[j + 1]);
                strcpy(rows[j + 1], temp);
            }
        }
    }
}

int main() {
    char rows[MAX_ROWS][MAX_COLS];

    for (int i = 0; i < MAX_ROWS; i++) {
        fgets(rows[i], sizeof(rows[i]), stdin);
        rows[i][strcspn(rows[i], "\n")] = '\0'; // 去除换行符
    }

    sortRows(rows);

    for (int i = 0; i < MAX_ROWS; i++) {
        printf("%s\n", rows[i]);
    }

    return 0;
}