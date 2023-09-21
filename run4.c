#include <stdio.h>
int main()
{
	//获取参数方式 scanf
    //int x  =0;
    //int y = 0;
    //scanf("%d", &x);

    //结果输出使用prinf
    //printf("%d",x);

 	// 请在此添加你的代码
    /********** Begin *********/
    int m;
    int sum=0;
    scanf("%d",&m);
    if (m==2)
        {
            m=m-1;
            sum=0;
        }
    while(m!=1)
    {
        if (m%2==1)
        {
            sum = sum + m;
            m = m - 2;
        }

        if (m%2==0)
        {
            m=m-1;
            sum =sum + m;
            m=m-2;
        }





    }
    sum+=1;
    printf("%d\n",sum);
    return 0;