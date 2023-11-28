#include <stdio.h>

float calculateAverageCourse(float *scores, int numStudents, int courseIndex) {
    float sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum += *(scores + i*5 + courseIndex);
    }
    return sum / numStudents;
}

void findStudentsWithFailures(float *scores, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        int numFailures = 0;
        for (int j = 0; j < 5; j++) {
            if (*(scores + i*5 + j) < 60) {
                numFailures++;
            }
        }
        if (numFailures >= 2) {
            printf("Student ID: %d\n", i + 1);
            printf("Scores: ");
            for (int j = 0; j < 5; j++) {
                printf("%.2f ", *(scores + i*5 + j));
            }
            printf("\n");
            float average = 0;
            for (int j = 0; j < 5; j++) {
                average += *(scores + i*5 + j);
            }
            average /= 5;
            printf("Average Score: %.2f\n", average);
            printf("\n");
        }
    }
}

void findHighAchievingStudents(float *scores, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        float average = 0;
        int allAbove85 = 1;
        for (int j = 0; j < 5; j++) {
            average += *(scores + i*5 + j);
            if (*(scores + i*5 + j) < 85) {
                allAbove85 = 0;
            }
        }
        average /= 5;
        if (average >= 90 || allAbove85) {
            printf("Student ID: %d\n", i + 1);
            printf("Scores: ");
            for (int j = 0; j < 5; j++) {
                printf("%.2f ", *(scores + i*5 + j));
            }
            printf("\n");
            printf("Average Score: %.2f\n", average);
            printf("\n");
        }
    }
}

int main() {
    float scores[100][5];
    int numStudents;
  
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
  
    printf("Enter the scores:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%f", &scores[i][j]);
        }
    }

    float averageFirstCourse = calculateAverageCourse(scores, numStudents, 0);
    printf("Average score of first course: %.2f\n", averageFirstCourse);
    printf("\n");

    printf("Students with failures:\n");
    findStudentsWithFailures(&scores[0][0], numStudents);
    printf("\n");

    printf("High achieving students:\n");
    findHighAchievingStudents(&scores[0][0], numStudents);

    return 0;
}
