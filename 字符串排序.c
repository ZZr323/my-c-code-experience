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
/*strcspn 函数是C语言中的一个字符串处理函数，它用于计算字符串中第一个不包含在指定字符集合中的字符的位置。具体语法如下：

Copy
size_t strcspn(const char *str, const char *reject);
str：要搜索的字符串。
reject：要排除的字符集合。
在你提供的代码片段中，strcspn(rows[i], "\n") 的意思是计算字符串 rows[i] 中第一个包含换行符 (\n) 之前的字符的位置。换句话说，它返回的是字符串 rows[i] 中不包含换行符的前缀的长度。

这种用法通常在处理文本行时很有用，可以用来找到一行字符串中的换行符之前的部分，从而定位行的起始位置。这在读取文本文件时，特别是按行读取时，是一个常见的操作。*/
    sortRows(rows);

    for (int i = 0; i < MAX_ROWS; i++) {
        printf("%s\n", rows[i]);
    }

    return 0;
}