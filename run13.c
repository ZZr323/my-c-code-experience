#include<stdio.h>
#include<math.h>
int main () {
    int code;
    float sum;
    scanf("%d",&code);
    scanf("%f",&sum);
    printf("%08d\n%.2f",code,sum);
    return 0;
}