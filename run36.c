#include <stdio.h>
#include<string.h>
int strcmp_custom(char *p1, char *p2) {
    while (*p1 && *p2) {
        if (*p1 > *p2) {
            return 1;
        } else if (*p1 < *p2) {
            return -1;
        }

        p1++;
        p2++;
    }

    if (*p1 == '\0' && *p2 == '\0') {
        return 0;
    } else if (*p1 == '\0') {
        return -1;
    } else {
        return 1;
    }
}

int main() {
    char str1[100], str2[100];

    fgets(str1, sizeof(str1), stdin);

    fgets(str2, sizeof(str2), stdin);

    // 移除换行符
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int result = strcmp_custom(str1, str2);

    if (result > 0) {
        printf("%s>%s\n", str1, str2);
    } else if (result < 0) {
        printf("%s<%s\n", str1, str2);
    } else {
        printf("%s=%s\n", str1, str2);
    }

    return 0;
}