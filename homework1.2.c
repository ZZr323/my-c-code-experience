#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float max=a;
    max<b?max=b:b;
    max<c?max=c:c;
    printf("�����������ֵmax = %f\n",max);
    return 0;
}
