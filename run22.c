#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int M, N, i, j;
    char array[MAX_SIZE][MAX_SIZE];
    char str[MAX_SIZE * MAX_SIZE]; // 一维数组，用于保存结果字符串

    // 读取数组的行数和列数
    scanf("%d %d", &M, &N);

    // 读取二维数组数据
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf(" %c", &array[i][j]); // 加一个空格以忽略换行符
        }
    }

    // 将二维数组按列顺序转换为一维数组
    int index = 0;
    for (j = 0; j < N; j++) {
        for (i = 0; i < M; i++) {
            str[index++] = array[i][j];
        }
    }
    str[index] = '\0'; // 添加字符串结束符

    // 打印结果字符串
    printf("%s\n", str);

    return 0;
}