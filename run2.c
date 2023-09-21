#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);
    if (x%3==0 || x/100%10==3)
    {
        printf("%d\n",x);
    }
    else{
        printf("排除此数");
    }
    return 0;
}
