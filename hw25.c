#include <stdio.h>
#include <string.h>

struct Student {
    int student_id;
    char name[50];
    float grades[3]; 
    float total_average;  
};

int main() {
    struct Student students[10];

    for (int i = 0; i < 10; ++i) {
        printf("请输入第 %d 个学生的学号：", i + 1);
        scanf("%d", &students[i].student_id);

        printf("请输入第 %d 个学生的姓名：", i + 1);
        scanf("%s", students[i].name);

        printf("请输入第 %d 个学生的三门课程成绩：", i + 1);
        for (int j = 0; j < 3; ++j) {
            scanf("%f", &students[i].grades[j]);
        }

        students[i].total_average = (students[i].grades[0] + students[i].grades[1] + students[i].grades[2]) / 3.0;
    }

    float totalGrades[3] = {0};
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 3; ++j) {
            totalGrades[j] += students[i].grades[j];
        }
    }

    for (int j = 0; j < 3; ++j) {
        totalGrades[j] /= 10;
    }

    printf("\n每门课程的总平均成绩：\n");
    for (int j = 0; j < 3; ++j) {
        printf("课程%d：%.2f\n", j + 1, totalGrades[j]);
    }
    printf("三门课程总平均成绩：%.2f\n",(totalGrades[0]+totalGrades[1]+totalGrades[2])/3.0);

    int highestIndex = 0;
    float highestGrade = students[0].total_average;

    for (int i = 0; i < 10; ++i) {
        if (students[i].total_average > highestGrade) {
            highestGrade = students[i].total_average;
            highestIndex = i;
        }
    }

    printf("\n最高分的学生数据：\n");
    printf("学号：%d\n", students[highestIndex].student_id);
    printf("姓名：%s\n", students[highestIndex].name);
    printf("三门课程成绩：%.2f, %.2f, %.2f\n", students[highestIndex].grades[0], students[highestIndex].grades[1], students[highestIndex].grades[2]);
    printf("平均分数：%.2f\n", students[highestIndex].total_average);

    return 0;
}
