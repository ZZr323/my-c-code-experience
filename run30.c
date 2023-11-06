#include <stdio.h>
#include <ctype.h>

int main(void) {
    int n;
    scanf("%d", &n);
    getchar();
    for (int k = 0; k < n; k++) {
        char str[100];
        fgets(str, sizeof(str), stdin);
        
        int count = 0;
        int i = 0;
        
        while (str[i] != '\0') {
            if (isdigit(str[i])) {
                count++;
            }
            i++;
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}