#include <stdio.h>

int main() {
    int A, B, C,x,y,z;
    char order[4];

    // 读取输入的三个整数和顺序
    scanf("%d %d %d", &x, &y, &z);
    if (x>y&&y>z)
    {
        A=z;
        B=y;
        C=x;
    }
    if (x>z&&z>y)
    {
        A=y;
        B=z;
        C=x;
    }
    if (y>z&&z>x)
    {
        A=x;
        B=z;
        C=y;
    }
    if (y>x&&x>z)
    {
        A=z;
        B=x;
        C=y;
    }
    if (z>x&&x>y)
    {
        A=y;
        B=x;
        C=z;
    }
    if (z>y&&y>x)
    {
        A=x;
        B=y;
        C=z;
    }
    scanf("%s",&order);

    // 按指定顺序输出重新排列后的三个整数
    if (order[0] == 'A') {
        printf("%d ", A);
    } else if (order[0] == 'B') {
        printf("%d ", B);
    } else {
        printf("%d ", C);
    }

    if (order[1] == 'A') {
        printf("%d ", A);
    } else if (order[1] == 'B') {
        printf("%d ", B);
    } else {
        printf("%d ", C);
    }

    if (order[2] == 'A') {
        printf("%d", A);
    } else if (order[2] == 'B') {
        printf("%d", B);
    } else {
        printf("%d", C);
    }

    return 0;
}