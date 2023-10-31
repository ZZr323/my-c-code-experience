#include <stdio.h>

int main() {
    char s1[100], s2[100];

    printf("请输入字符串 s1：");
    gets(s1);

    printf("请输入字符串 s2：");
    gets(s2);

    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            printf("结果：%d\n", s1[i] - s2[i]);
            return 0;
        }
        i++;
    }

    printf("结果：0\n");

    return 0;
}