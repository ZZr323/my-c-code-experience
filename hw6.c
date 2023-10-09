#include <stdio.h>

int main() {
    char str[100];
    int letter = 0, space = 0, digit = 0, other = 0;
    int i = 0;

    printf("请输入一行字符：");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\n') {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            letter++;
        } else if (ch == ' ') {
            space++;
        } else if (ch >= '0' && ch <= '9') {
            digit++;
        } else if (ch != '\n') {
            other++;
        }

        i++;
    }

    printf("英文字母个数：%d\n", letter);
    printf("空格个数：%d\n", space);
    printf("数字个数：%d\n", digit);
    printf("其他字符个数：%d\n", other);

    return 0;
}