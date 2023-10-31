#include <stdio.h>

int main() {
    char message[100];

    printf("请输入密码：");
    fgets(message, sizeof(message), stdin);

    printf("密码：%s", message);

    int i = 0;
    while (message[i] != '\0') {
        if ((message[i] >= 'A' && message[i] <= 'Z') || (message[i] >= 'a' && message[i] <= 'z')) {
            if (message[i] >= 'A' && message[i] <= 'Z') {
                message[i] = 'Z' - (message[i] - 'A');
            } else {
                message[i] = 'z' - (message[i] - 'a');
            }
        }
        i++;
    }

    printf("原文：%s", message);

    return 0;
}