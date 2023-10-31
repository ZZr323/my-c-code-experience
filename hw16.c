#include <stdio.h>

int main() {
    char s1[100], s2[100];

    printf("请输入字符串 s2：");
    fgets(s2, sizeof(s2), stdin);

    int i = 0;
    while (s2[i] != '\0') {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';

    printf("复制后的字符串 s1：%s\n", s1);

    return 0;
}