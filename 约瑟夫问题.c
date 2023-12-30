#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int circle[1000];
    int i;
    for (i = 0; i < n; ++i) {
        circle[i] = i + 1;  // 初始化圈子，编号从1到n
    }

    int count = 0;  // 计数器，用于报数
    int remain = n;  // 剩余人数

    // 循环模拟报数过程，直到只剩下一人
    while (remain > 1) {
        for (i = 0; i < n; ++i) {
            if (circle[i] > 0) {  // 该位置上有人
                ++count;  // 报数
                if (count == 3) {  // 报到3的人退出
                    circle[i] = 0;  // 标记该位置上的人退出
                    --remain;  // 剩余人数减一
                    count = 0;  // 重置计数器
                }
            }
        }
    }

    // 找到最后剩下的人的编号
    for (i = 0; i < n; ++i) {
        if (circle[i] > 0) {
            printf("%d\n", circle[i]);
            break;
        }
    }

    return 0;
}


/*指针法
#include <stdio.h>

int findLastPerson(int n) {
    int circle[1000];
    int *ptr = circle;  // 使用指针指向数组的首地址
    int i;

    // 初始化圈子，编号从1到n
    for (i = 0; i < n; ++i) {
        *ptr = i + 1;
        ++ptr;
    }

    int count = 0;  // 计数器，用于报数
    int remain = n;  // 剩余人数
    ptr = circle;  // 重置指针到数组的首地址

    // 循环模拟报数过程，直到只剩下一人
    while (remain > 1) {
        for (i = 0; i < n; ++i) {
            if (*ptr > 0) {  // 该位置上有人
                ++count;  // 报数
                if (count == 3) {  // 报到3的人退出
                    *ptr = 0;  // 标记该位置上的人退出
                    --remain;  // 剩余人数减一
                    count = 0;  // 重置计数器
                }
            }
            ++ptr;
            if (ptr == circle + n) {
                ptr = circle;  // 指针越界时重置到数组的首地址
            }
        }
    }

    // 找到最后剩下的人的编号
    ptr = circle;
    for (i = 0; i < n; ++i) {
        if (*ptr > 0) {
            return *ptr;
        }
        ++ptr;
    }

    return -1;  // 出错时返回-1
}

int main() {
    int n;
    scanf("%d", &n);

    int result = findLastPerson(n);
    printf("%d\n", result);

    return 0;
}
*/