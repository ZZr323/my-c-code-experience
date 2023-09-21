#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days,charge;
    float medicinefee,bedfee,change,sum;
    printf("请输入药品费、床位费/天、住院天数:");
    scanf("%f %f %d",&medicinefee,&bedfee,&days);
    sum = medicinefee + bedfee*days;
    printf("应付款:%.2f\n",sum);
    printf("实付款:");
    scanf("%d",&charge);
    change = charge - sum;
    printf("应找零:%.2f",change);
    return 0;
}
