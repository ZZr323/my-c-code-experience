#include <stdio.h>
#include <string.h>

struct Student {
    int number;
    char name[50];
    int score;
};

void sortStudents(struct Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].score < arr[j + 1].score) {
                struct Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %d", &students[i].number, students[i].name, &students[i].score);
    }

    sortStudents(students, n);

    for (int i = 0; i < n; i++) {
        printf("%d %s %d\n", students[i].number, students[i].name, students[i].score);
    }

    return 0;
}