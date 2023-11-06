#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    char s1[100];
    fgets(s1, sizeof(s1), stdin);
    char s2[100];
    fgets(s2, sizeof(s2), stdin);
    int j;
    scanf("%d", &j);
    char result[200]; // 存储结果的字符数组
    // 去除 s1 字符串中的换行符
    s1[strcspn(s1, "\n")] = '\0';

    // 去除 s2 字符串中的换行符
    s2[strcspn(s2, "\n")] = '\0';

    // 将 s1 中前 j 个字符复制到 result
    strncpy(result, s1, j);
    result[j] = '\0'; // 添加字符串结束符

    // 将 s2 追加到 result 的末尾
    strcat(result, s2);
    // 将 s1 中从第 j 个字符到末尾的字符追加到 result 的末尾
    strcat(result, s1 + j);

    printf("%s", result);
    return 0;
}