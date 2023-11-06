#include<stdio.h>
#include<string.h>

int main(void)
{
    char arr[100];
    fgets(arr, sizeof(arr), stdin);
    int length = strlen(arr);

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }

    return 0;
}