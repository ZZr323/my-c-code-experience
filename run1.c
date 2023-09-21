#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    char y1,y2,y3,y4;
    printf("请输入一个4位整数:");
    scanf("%d",&x);
    while (x>=10000)
    {
        x/=10;
    }
    y1 = x%10 + '0';       //得到个位数字
    y2 = x/10%10 + '0';    //得到十位数字
    y3 = x/100%10 + '0';   //得到百位数字
    y4 = x/1000 + '0';     //得到千位数字
    printf("重新组合后:%c%c%c%c", y1, y2, y3, y4);


    return 0;
}
