#include <stdio.h>
#include <math.h>
#define NUM_STUDENTS 10
#define NUM_COURSES 5

void StuAver(const int grades[NUM_STUDENTS][NUM_COURSES]) {
    printf("Student averages:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        int sum = 0;
        for (int j = 0; j < NUM_COURSES; j++) {
            sum += grades[i][j];
        }
        float average = (float)sum / NUM_COURSES;
        printf("Student %d: %.2f\n", i + 1, average);
    }
    printf("\n");
}

void CouAver(const int grades[NUM_STUDENTS][NUM_COURSES]) {
    printf("Course averages:\n");
    for (int j = 0; j < NUM_COURSES; j++) {
        int sum = 0;
        for (int i = 0; i < NUM_STUDENTS; i++) {
            sum += grades[i][j];
        }
        float average = (float)sum / NUM_STUDENTS;
        printf("Course %d: %.2f\n", j + 1, average);
    }
    printf("\n");
}

void HighScore(const int grades[NUM_STUDENTS][NUM_COURSES]) {
    int maxScore = 0;
    int maxStudent = 0;
    int maxCourse = 0;

    for (int i = 0; i < NUM_STUDENTS; i++) {
        for (int j = 0; j < NUM_COURSES; j++) {
            if (grades[i][j] > maxScore) {
                maxScore = grades[i][j];
                maxStudent = i + 1;
                maxCourse = j + 1;
            }
        }
    }

    printf("Highest score: Student %d, Course %d, Score %d\n\n", maxStudent, maxCourse, maxScore);
}

float calAver(const int grades[NUM_STUDENTS][NUM_COURSES], int studentIndex) {
    int sum = 0;
    for (int j = 0; j < NUM_COURSES; j++) {
        sum += grades[studentIndex][j];
    }
    float average = (float)sum / NUM_COURSES;
    return average;
}

float Variance(const int grades[NUM_STUDENTS][NUM_COURSES]) {
    float sumsq = 0;
    float suma = 0;

    for (int i = 0; i < NUM_STUDENTS; i++) {
        float average = calAver(grades,i);
        sumsq += average * average;
        suma += average;
    }

    float variance = (sumsq / NUM_STUDENTS) - pow((suma / NUM_STUDENTS), 2);
    return variance;
}

int main() {
    int grades[NUM_STUDENTS][NUM_COURSES];

    printf("Enter the grades of each student for each course:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < NUM_COURSES; j++) {
            printf("Course %d: ", j + 1);
            scanf("%d", &grades[i][j]);
        }
        printf("\n");
    }

    StuAver(grades);
    CouAver(grades);
    HighScore(grades);

    float variance = Variance(grades);
    printf("Variance: %.2f\n", variance);

    return 0;
}